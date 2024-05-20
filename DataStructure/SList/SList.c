//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "SList.h"
//
//
////��ӡ
//void SLTPrint(SLNode* phead)
//{
//	SLNode* cur = phead;
//	while (cur != NULL)
//	{
//		printf("%d -> ", cur->val);
//		cur = cur->next;
//	}
//	puts("NULL\n");
//}
////����һ���µĽ��
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
////������β��
//void SLTPushBack(SLNode** pphead, SLNDataType x)
//{
//	SLNode* newnode = CreateNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		//��β���
//		SLNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
////������ͷ��
//void SLTPushFront(SLNode** pphead, SLNDataType x)
//{
//	SLNode* newnode = CreateNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
////������βɾ
//void SLTPopBack(SLNode** pphead)
//{
//	SLNode* prev = NULL;
//	SLNode* tail = *pphead;
//	//Ϊ�ա�ֻ��һ�����
//	if (tail == NULL || tail->next == NULL)
//	{
//		free(tail);
//		*pphead = NULL;
//	}
//	else
//	{//�ж�����
//		while (tail->next != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//		}
//		free(tail);
//		tail = NULL;
//		prev->next = NULL;
//	}
//}
////������ͷɾ
//void SLTPopFront(SLNode** pphead)
//{
//	assert(*pphead);
//	SLNode* tmp = (*pphead)->next;
//	free(*pphead);
//	*pphead = tmp;
//}
//
////���������
//SLNode* SListFind(SLNode* phead, SLNDataType x)
//{
//	SLNode* tail = phead;
//	while (tail)
//	{
//		if (tail->val == x)
//		{
//			return tail;
//		}
//		tail = tail->next;
//	}
//	return NULL;
//}
//
////��������posλ��֮�����x
//void SListInsertAfter(SLNode* pos, SLNDataType x)
//{
//	assert(pos);
//	SLNode* tmp = pos->next;
//	SLNode* newnode = CreateNode(x);
//	newnode->next = tmp;
//	pos->next = newnode;
//}
//
////������ɾ��posλ��֮���ֵ
//void SListEraseAfter(SLNode* pos)
//{
//	assert(pos);
//	SLNode* tail = pos->next;
//	if (tail != NULL)
//	{
//		SLNode* tailnext = tail->next;
//		free(tail);
//		pos->next = tailnext;
//	}
//}
