#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int* TwoSum(int * nums, int target);
ListNode* AddTwoNumbersSum(ListNode* num1, ListNode* num2);