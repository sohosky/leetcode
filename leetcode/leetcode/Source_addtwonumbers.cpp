#include <iostream>
#include "leetcode.h"

ListNode* AddTwoNumbersSum(ListNode* num1, ListNode* num2)
{
	ListNode* l3 = new ListNode(0);
	ListNode* p = num1;
	ListNode* q = num2;
	ListNode* r = l3;
	int ret[64] = { 0 };
	int sum = 0;
	int carry = 0;
	int testcnt = 0;
retry:
	while ((p != NULL || q != NULL) || carry != 0)
	{
		if (p != NULL && q != NULL)
		{
			if (carry != 0)
			{
				sum = p->val + q->val + 1;
				carry = 0;
			}
			else
			{
				sum = p->val + q->val;
			}
			carry = sum / 10;
			r->next = new ListNode(sum % 10);
			p = p->next;
			q = q->next;
			r = r->next;
		}
		else
		{
			if (p != NULL)
			{
				if (carry != 0)
				{
					sum = p->val + 1;
					carry = 0;
				}
				else
				{
					sum = p->val;
				}
				p = p->next;
			}

			if (q != NULL)
			{
				if (carry != 0)
				{
					sum = q->val + 1;
					carry = 0;
				}
				else
				{
					sum = q->val;
				}
				q = q->next;
			}
			if (carry != 0)sum = carry;
			carry = sum / 10;
			r->next = new ListNode(sum % 10);
			r = r->next;
		}


	}
	if ((carry != 0) || (p != NULL) || (q != NULL))
		goto retry;

	return l3->next;
	//return ret;
}
/*
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* l3 = new ListNode(0);
		ListNode* p = l1;
		ListNode* q = l2;
		ListNode* r = l3;
		int sum = 0;
		int carry = 0;
		int testcnt = 0;
	retry:
		while ((p != NULL || q != NULL) || carry != 0)
		{
			if (p != NULL && q != NULL)
			{
				if (carry != 0)
				{
					sum = p->val + q->val + 1;
					carry = 0;
				}
				else
				{
					sum = p->val + q->val;
				}
				carry = sum / 10;
				r->next = new ListNode(sum % 10);
				p = p->next;
				q = q->next;
				r = r->next;
			}
			else
			{
				if (p != NULL)
				{
					if (carry != 0)
					{
						sum = p->val + 1;
						carry = 0;
					}
					else
					{
						sum = p->val;
					}
					p = p->next;
				}

				if (q != NULL)
				{
					if (carry != 0)
					{
						sum = q->val + 1;
						carry = 0;
					}
					else
					{
						sum = q->val;
					}
					q = q->next;
				}
				if (carry != 0)sum = carry;
				carry = sum / 10;
				r->next = new ListNode(sum % 10);
				r = r->next;
			}


		}
		if ((carry != 0) || (p != NULL) || (q != NULL))
			goto retry;

		return l3->next;
	}
};
*/