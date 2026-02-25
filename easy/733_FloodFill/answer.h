/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-02-25
 * Problem : 733-easy-Flood Fill
 * Link    : https://leetcode.com/problems/flood-fill/solutions/7461123/flood-fill-using-bfs-and-dfs-java-c-pyth-4vf9/
*/

#pragma once
#include "common.h"
using namespace std;

class Solution
{
  void dfs(vector<vector<int>>& image, int sr, int sc, int row, int col, int src_color, int color)
  {
    if (sr < 0 || sr >= row)
      return;
    if (sc < 0 || sc >= col)
      return;
    if (image[sr][sc] != src_color)
      return;

    image[sr][sc] = color;

    dfs(image, sr - 1, sc, row, col, src_color, color);
    dfs(image, sr + 1, sc, row, col, src_color, color);
    dfs(image, sr, sc - 1, row, col, src_color, color);
    dfs(image, sr, sc + 1, row, col, src_color, color);
  }

public:
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
  {
    int src_color = image[sr][sc];
    if (src_color == color)
      return image;

    int row = image.size();
    int col = image[0].size();
    dfs(image, sr, sc, row, col, src_color, color);
    return image;
  }
};
