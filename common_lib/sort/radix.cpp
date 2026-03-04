#include "radix.h"
#include "sort.h"
#include <vector>
using namespace std;

static const int NUM_DIGITS = 10;

void counting_sort(vector<int>& nums, int place_val)
{
  vector<int> counting(NUM_DIGITS);

  for (int i : nums)
  {
    int n  = (i / place_val) % NUM_DIGITS;
    counting[n]++;
  }

  int start_index = 0;
  for (int i = 0; i < counting.size(); i++)
  {
    int count = counting[i];
    counting[i] = start_index;
    start_index += count;
  }

  // sorting
  vector<int> result(nums.size());
  for (int i : nums)
  {
    int n  = (i / place_val) % NUM_DIGITS;
    int index = counting[n];
    result[index] = i;
    counting[n]++;
  }

  nums.swap(result);
}

void radix_sort(vector<int>& nums)
{
  int max_val = -1;
  for (int i : nums)
  {
    if (i > max_val)
      max_val = i;
  }

  // LSD (least significant digit)
  int place_val = 1;
  while (place_val < max_val)
  {
    counting_sort(nums, place_val);
    place_val *= 10;
  }
}
