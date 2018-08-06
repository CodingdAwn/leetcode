/*****************************************************************************
	created: 	2018-08-05
	author:		dAwn_
	purose:		LeetCode easy 53 Maximum SubArray
*****************************************************************************/

#include "TestHeader.h"
#include "DString.h"
#include <algorithm>

int maxSubArray(std::vector<int>& nums)
{
	int nMax = 0, nRet = 0;
	for (size_t i = 0; i < nums.size(); ++i)
	{
		// pool implement
		/* 
		if (nMax < 0)
		{
			nMax = nums[i];
		}
		else
		{
			nMax += nums[i];
		}
		if (nMax > nRet)
		{
			nRet = nMax;
		}
		*/

		// new method
		nMax = nums[i] + (nMax >= 0 ? nMax : 0);
		nRet = std::max(nMax, nRet);
	}
	return nRet;
}

void Test_MaximumSubarray()
{
	auto func = [&](char* input)
	{
		vector<int> nums;
		dAwn::substring2int(input, nums, ' ');
		int result = maxSubArray(nums);
		cout << "Test_MaximumSubarray result is " << result << endl;
	};	
	
	LoopInputNumberToCall(func);
}
