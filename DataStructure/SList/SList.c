//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "SList.h"
//
//
//
//
//
//
//void SLTPrint(SLNode* phead)
//{
//	SLNode* cur = phead;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->val);
//		cur = cur->next;
//	}
//	putchar('\n');
//
//}
//
//SLNode* CreateNode(SLNDataType x)
//{
//	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	newnode->val = x;
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//
//
//void SLTPushBack(SLNode** pphead, SLNDataType x)
//{
//	SLNode* newnode = CreateNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		SLNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}	
//}
//
//
//void SLTPushFront(SLNode** pphead, SLNDataType x)
//{
//	SLNode* newnode = CreateNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//
//}
//
//
//void SLTPopBack(SLNode** pphead)
//{
//	assert(*pphead);
//
//	if ((*pphead)->next == NULL)//若头指针指向了一个空指针
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		SLNode* prev = NULL;
//		SLNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//		}
//		free(tail);
//		prev->next = NULL;
//	}
//}
//
//
//
//void SLTPopFront(SLNode** pphead)
//{
//	assert(*pphead);
//	SLNode* tail = (*pphead)->next;
//	free(*pphead);
//	*pphead = tail;
//
//}