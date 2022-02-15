#include <iostream>
#include "leetcode.h"
int* TwoSum(int* nums, int target)
{
	int sum = 0;
	int ret[2] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i != j)
			{
				if ((nums[i] + nums[j]) == target)
				{
					wprintf_s(L"i[%d] + j[%d] = %d : %d\n", nums[i], nums[j],i+j, target);
					ret[0] = nums[i];
					ret[1] = nums[j];
					return ret;
					break;
				}			
			}
		}
	}
	return ret;
}