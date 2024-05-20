#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//打印
void SLTPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d -> ", cur->val);
		cur = cur->next;
	}
	puts("NULL\n");

}
//创建一个新的结点
SLNode* CreateNode(SLNDataType x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->val = x;
	newnode->next = NULL;
	
	return newnode;
}
//单链表尾插
void SLTPushBack(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreateNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾结点
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
//单链表头插
void SLTPushFront(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreateNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//单链表尾删
void SLTPopBack(SLNode** pphead)
{
	assert(*pphead);
	//只有一个结点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//有多个结点
		SLNode* prev = NULL;
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
	
}
//单链表头删
void SLTPopFront(SLNode** pphead)
{
	assert(*pphead);
	SLNode* tmp = (*pphead)->next;
	free(*pphead);
	*pphead = tmp;
}


// 单链表查找
SLNode* SListFind(SLNode* phead, SLNDataType x)
{
	SLNode* tail = phead;
	while (tail != NULL)
	{
		if (tail->val == x)
		{
			return tail;
		}
		tail = tail->next;
	}
	return NULL;
}

