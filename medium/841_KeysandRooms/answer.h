/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-02-26
 * Problem : 841-medium-Keys and Rooms
 * Link    : 
*/

#pragma once
#include "common.h"
using namespace std;

class Solution
{
public:
  bool canVisitAllRooms(vector<vector<int>>& rooms)
  {
    unordered_set<int> s;
    s.insert(0);
    queue<int> q;
    for (auto r : rooms[0])
      q.push(r);

    int unlocks = 1;
    while (!q.empty())
    {
      int r = q.front();
      q.pop();
      s.insert(r);
      unlocks++;

      for (int n : rooms[r])
      {
        if (s.count(n) > 0)
          continue;
        q.push(n);
      }
    }

    return unlocks == rooms.size();
  }
};
