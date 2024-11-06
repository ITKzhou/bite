#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SLTPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur) {
		printf("%d>> ", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLTDestroy(SLNode** pphead)
{
	assert(pphead);
	SLNode* cur = *pphead;
	while (cur){
		SLNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;//传二级指针，plist已经在函数内部置空
}

SLNode* CreateNode(SLNDataType x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if(newnode == NULL){
		perror("malloc failed");
		return NULL;
	}
	newnode->val = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreateNode(x);
	//空链表时
	if (*pphead == NULL){
		*pphead = newnode;
	}
	else{
		SLNode* tail = *pphead;
		while (tail->next){
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SLTPushFront(SLNode** pphead, SLNDataType x)
{
	assert(pphead);

	SLNode* newnode = CreateNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	//只有一个结点时
	if ((*pphead)->next == NULL){
		(*pphead) = NULL;
	}
	else {
		SLNode* prev = *pphead;
		//找尾结点的前一个
		while (prev->next->next){
			prev = prev->next;
		}
		free(prev->next);
		prev->next = NULL;
	}
	
}
//单链表头删
void SLTPopFront(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLNode* del = *pphead;
	*pphead = del->next;
	free(del);
	del = NULL;
}



SLNode* SListFind(SLNode* phead, SLNDataType x)
{
	SLNode* cur = phead;
	while (cur){
		if (cur->val == x){
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SLNode* pos, SLNDataType x)
{
	assert(pos);

	SLNode* newnode = CreateNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SLNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLNode* next = pos->next->next;
	free(pos->next);
	pos->next = next;
}

// 在pos的前面插入
void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);

	if (pos == *pphead){
		SLTPushFront(pphead, x);
	}
	else {
		SLNode* newnode = CreateNode(x);
		SLNode* prev = *pphead;
		while (prev->next != pos){
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}

}
// 删除pos位置
void SLTErase(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);

	//头删
	if (pos == *pphead){
		SLTPopFront(pphead);
	}
	else{
		SLNode* prev = *pphead;
		while (prev->next != pos){
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}