#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <windows.system.h>

typedef int SLNDataType;

typedef struct SListNode
{
	int val;
	struct SListNode* next;
}SLNode;


//打印
void SLTPrint(SLNode* phead);
//创建一个新的结点
SLNode* CreateNode(SLNDataType x);
//单链表尾插
void SLTPushBack(SLNode** pphead, SLNDataType x);
//单链表头插
void SLTPushFront(SLNode** pphead, SLNDataType x);
//单链表尾删
void SLTPopBack(SLNode** pphead);
//单链表头删
void SLTPopFront(SLNode** pphead);
// 单链表查找
SLNode* SListFind(SLNode* phead, SLNDataType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SLNode* pos, SLNDataType x);
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SLNode* pos);

// 在pos的前面插入
void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x);
// 删除pos位置
void SLTErase(SLNode** pphead, SLNode* pos);
//销毁单链表
void SLTDestroy(SLNode** pphead);










