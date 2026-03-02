#include "sort.h"
#include <strings.h>
#include <vector>

using namespace std;

void counting_sort(vector<int>& nums)
{
  int K = -1;
  for (int i : nums)
  {
    if (i > K)
      K = i;
  }

  std::vector<int> counting(K+1);
  for (int i = 0; i < nums.size(); i++)
    counting[nums[i]]++;

  // setup start index
  int start_index = 0;
  for (int i = 0; i < counting.size(); i++)
  {
    int count = counting[i];
    counting[i] = start_index; 
    start_index += count;
  }

  // sorting
  std::vector<int> result(nums.size());
  for (int i : nums)
  {
    int index = counting[i];
    result[index] = i;
    counting[i]++;
  }

  nums.swap(result);
}
