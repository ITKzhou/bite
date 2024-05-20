#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//��ӡ
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
//������β��
void SLTPushBack(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreateNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β���
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
//������ͷ��
void SLTPushFront(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreateNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//������βɾ
void SLTPopBack(SLNode** pphead)
{
	assert(*pphead);
	//ֻ��һ�����
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//�ж�����
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
//������ͷɾ
void SLTPopFront(SLNode** pphead)
{
	assert(*pphead);
	SLNode* tmp = (*pphead)->next;
	free(*pphead);
	*pphead = tmp;
}


// ���������
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

