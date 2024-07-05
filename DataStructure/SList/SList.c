#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//打印
void SLTPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur)
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

//销毁单链表
void SLTDestroy(SLNode** pphead)
{
	assert(pphead);
	SLNode* cur = *pphead;
	while (cur)
	{
		*pphead = cur->next;
		free(cur);
		cur = *pphead;
	}
}

//单链表尾插
void SLTPushBack(SLNode** pphead, SLNDataType x)
{
	assert(pphead);
	SLNode* newnode = CreateNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾结点
		SLNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//单链表头插
void SLTPushFront(SLNode** pphead, SLNDataType x)
{
	assert(pphead);
	SLNode* newnode = CreateNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//单链表尾删
void SLTPopBack(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	//只有一个结点
	if ((*pphead)->next == NULL){
		free(*pphead);
		*pphead = NULL;
	}
	else{
		SLNode* tail = *pphead;
		while (tail->next->next){
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

//单链表头删
void SLTPopFront(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
}

//单链表查找
SLNode* SListFind(SLNode* phead, SLNDataType x)
{
	SLNode* cur = phead;
	while (cur)
	{
		if (cur->val == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

// 在pos的前面插入
void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLNode* newnode = CreateNode(x);
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}

//单链表在pos位置之后插入x
void SListInsertAfter(SLNode* pos, SLNDataType x)
{
	assert(pos);
	SLNode* newnode = CreateNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

// 删除pos位置的结点
void SLTErase(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

//单链表删除pos位置之后的值
void SListEraseAfter(SLNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLNode* del = pos->next;
	pos->next = del->next;
	free(del);
}

