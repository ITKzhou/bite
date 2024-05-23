#pragma once



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>




//带头循环双向链表
// 带头+双向+循环链表增删查改实现
typedef int LTDataType;

typedef struct ListNode
{
	LTDataType val;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;



// 创建一个结点
LTNode* CreateLTNode(LTDataType x);
// 初始化
LTNode* LTInit();
// 销毁
void ListDestory(LTNode* pHead);
// 打印
void ListPrint(LTNode* pHead);
// 尾插
void ListPushBack(LTNode* pHead, LTDataType x);
// 尾删
void ListPopBack(LTNode* pHead);
// 头插
void ListPushFront(LTNode* pHead, LTDataType x);
// 头删
void ListPopFront(LTNode* pHead);
// 查找
LTNode* ListFind(LTNode* pHead, LTDataType x);
// 在pos的前面进行插入
void ListInsert(LTNode* pos, LTDataType x);
// 删除pos位置的节点
void ListErase(LTNode* pos);

