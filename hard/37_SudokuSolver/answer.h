/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-03-13
 * Problem : 37-hard-Sudoku Solver
 * Link    :
 */

#pragma once
#include "common.h"
using namespace std;

class Solution
{
  vector<vector<bool>> rows;
  vector<vector<bool>> cols;
  vector<vector<bool>> rects;

  bool isvalid(int i, int j, int r, int n)
  {
    return !(rows[i][n] || cols[j][n] || rects[r][n]);
  }

  bool solver(vector<vector<char>>& board, int x, int y)
  {
    if (x >= 9)
      return true;

    if (y == 9)
      return solver(board, x + 1, 0);

    if (board[x][y] != '.')
      return solver(board, x, y + 1);

    for (char c = '1'; c <= '9'; c++)
    {
      int n = c - '0';
      int r = (x / 3) * 3 + (y / 3);

      if (isvalid(x, y, r, n))
      {
        rows[x][n] = cols[y][n] = rects[r][n] = true;
        board[x][y] = c;

        if (solver(board, x, y + 1))
          return true;

        rows[x][n] = cols[y][n] = rects[r][n] = false;
        board[x][y] = '.';
      }
    }

    return false;
  }

public:
  void solveSudoku(vector<vector<char>>& board)
  {
    rows.assign(9, vector<bool>(10, false));
    cols.assign(9, vector<bool>(10, false));
    rects.assign(9, vector<bool>(10, false));

    // initial puzzle
    for (int i = 0; i < 9; i++)
    {
      for (int j = 0; j < 9; j++)
      {
        char c = board[i][j];
        if (c == '.')
        {
          continue;
        }

        int n = c - '0';
        int r = (i / 3) * 3 + (j / 3);
        rows[i][n] = cols[j][n] = rects[r][n] = true;
      }
    }

    solver(board, 0, 0);
  }
};
