#include <iostream>
#include "leetcode.h"

int main(char *argv[], int argc)
{
	int ret = 0;
	char ch;
	wprintf_s(L"=========LeeCode SKY=======\n");
	scanf("%c", &ch);
	getchar();
	int* ptr = NULL;
	ListNode* ptr_ = NULL;
	switch (ch)
	{
	case '0':
		wprintf_s(L"====IDLE====\n");
		break;
	case '1':
	{
		int nums[5] = { 2, 7, 11, 15, 9 };
		int* nums_ = &nums[0];
		int target = 9;
		wprintf_s(L"====Two Sum====\n");
		ptr = TwoSum(nums, target);
	}
		break;
	case '2':
	{
		ListNode num1[3] = { 2, 4, 3};
		ListNode* num1_ = &num1[0];
		ListNode num2[3] = { 5, 6, 4};
		ListNode* num2_ = &num2[0];
		wprintf_s(L"====Add Two Number Sum====\n");
		ptr_ = AddTwoNumbersSum(num1_, num2_);
	}
		wprintf_s(L"====Two Sum %d====\n", &ptr_);
		break;
	case '3':
	{
		wprintf_s(L"====Roman to Integer====\n");
	}
		break;
	}

	return ret;
}
