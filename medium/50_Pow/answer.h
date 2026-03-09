/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-03-09
 * Problem : 50-medium-Pow
 * Link    : 
*/

#pragma once
#include "common.h"
using namespace std;

class Solution
{
public:
  // 快速幂
  double myPow(double x, int n)
  {
    double result = 1.0;
    long s = n;
    s = abs(s);
    while (s)
    {
      if (s & 1)
      {
        result *= x;
      }

      x *= x;
      s >>= 1;
    }
    if (n < 0)
      result = 1 / result;

    return result;
  }
};
