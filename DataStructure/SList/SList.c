#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//��ӡ
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

//����һ���µĽ��
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

//���ٵ�����
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

//������β��
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
		//��β���
		SLNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//������ͷ��
void SLTPushFront(SLNode** pphead, SLNDataType x)
{
	assert(pphead);
	SLNode* newnode = CreateNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//������βɾ
void SLTPopBack(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	//ֻ��һ�����
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

//������ͷɾ
void SLTPopFront(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
}

//���������
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

// ��pos��ǰ�����
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

//��������posλ��֮�����x
void SListInsertAfter(SLNode* pos, SLNDataType x)
{
	assert(pos);
	SLNode* newnode = CreateNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

// ɾ��posλ�õĽ��
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

//������ɾ��posλ��֮���ֵ
void SListEraseAfter(SLNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLNode* del = pos->next;
	pos->next = del->next;
	free(del);
}

