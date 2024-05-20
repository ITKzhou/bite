#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>






struct ListNode
{
	struct ListNode* next;
	int val;
};

struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* prev = NULL;
	struct ListNode* cur = head;

	//while(cur != NULL)
	while (cur)
	{
		if (cur->val == val)
		{
			struct ListNode* next = cur->next;
			free(cur);

			if (prev)
				prev->next = next;

			cur = next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}

	return head;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val = 7;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	struct ListNode* head = removeElements(n1, 7);

	return 0;
}
