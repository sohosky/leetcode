#include <iostream>
#include "leetcode.h"

int main(char *argv[], int argc)
{
	int ret = 0;
	char ch;
	wprintf_s(L"=========LeeCode SKY=======\n");
	scanf("%c", &ch);
	getchar();
	switch (ch)
	{
	case '0':
		wprintf_s(L"====IDLE====\n");
		break;
	case '1':
		int nums[5] = { 2, 7, 11, 15, 9 };
		int* nums_ = &nums[0];
		int target = 9;
		wprintf_s(L"====Two Sum====\n");
		int* ptr = TwoSum(nums, target);
		break;
	}

	return ret;
}
