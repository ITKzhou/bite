//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "SList.h"
//
//
////打印
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
//
////创建一个新的结点
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
////单链表尾插
//void SLTPushBack(SLNode** pphead, SLNDataType x)
//{
//	SLNode* newnode = CreateNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		//找尾结点
//		SLNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//
////单链表头插
//void SLTPushFront(SLNode** pphead, SLNDataType x)
//{
//	SLNode* newnode = CreateNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
////单链表尾删
//void SLTPopBack(SLNode** pphead)
//{
//	//SLNode* prev = NULL;
//	//SLNode* tail = *pphead;
//	////为空、只有一个结点
//	//if (tail ==NULL || tail->next == NULL)
//	//{
//	//	free(tail);
//	//	*pphead = NULL;
//	//}
//	//else
//	//{//有多个结点
//	//	while (tail->next != NULL)
//	//	{
//	//		prev = tail;
//	//		tail = tail->next;
//	//	}
//	//	free(tail);
//	//	tail = NULL;
//	//	prev->next = NULL;
//	//}
//
//	assert(*pphead);
//
//	//只有一个结点
//	if ((*pphead)->next == NULL){
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else{
//		SLNode* tail = *pphead;
//		while (tail->next->next){
//			tail = tail->next;
//		}
//		free(tail->next);
//		tail->next = NULL;
//	}
//}
////单链表头删
//void SLTPopFront(SLNode** pphead)
//{
//	assert(*pphead);
//	SLNode* tmp = (*pphead)->next;
//	free(*pphead);
//	*pphead = tmp;
//}
//
////单链表查找
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
////单链表在pos位置之后插入x
//void SListInsertAfter(SLNode* pos, SLNDataType x)
//{
//	assert(pos);
//	SLNode* tmp = pos->next;
//	SLNode* newnode = CreateNode(x);
//	newnode->next = tmp;
//	pos->next = newnode;
//}
//
////单链表删除pos位置之后的值
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
//
//
//
//// 在pos的前面插入
//void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x)
//{
//	assert(pphead);
//	assert(*pphead);
//	assert(pos);
//	if (pos == *pphead)
//	{
//		//头插
//		SLTPushFront(pphead, x);
//	}
//	else
//	{
//		SLNode* newnode = CreateNode(x);
//		SLNode* cur = *pphead;
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		newnode->next = pos;
//		cur->next = newnode;
//	}
//}
//// 删除pos位置的结点
//void SLTErase(SLNode** pphead, SLNode* pos)
//{
//	assert(pphead);
//	assert(*pphead);
//	assert(pos);
//	if (pos == *pphead)
//	{
//		//头删
//		SLTPopFront(pphead);
//	}
//	else
//	{
//		SLNode* cur = *pphead;
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		cur->next = pos->next;
//		free(pos);
//		pos = NULL;
//	}	
//}
////销毁单链表
//void SLTDestroy(SLNode** pphead)
//{
//	assert(pphead);
//	SLNode* cur = *pphead;
//	while (cur != NULL)
//	{
//		*pphead = cur->next;
//		free(cur);
//		cur = *pphead;
//	}
//}
//
