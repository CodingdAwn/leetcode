#pragma once
#include "sort.h"

using namespace std;

class TestCommonLib
{
public:
  void test_counting_sort(vector<int>& nums)
  {
    counting_sort(nums);
  }

  void test_radix_sort(vector<int>& nums)
  {
    radix_sort(nums);
  }
};
