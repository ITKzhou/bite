#pragma once



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>




//��ͷѭ��˫������
// ��ͷ+˫��+ѭ��������ɾ���ʵ��
typedef int LTDataType;

typedef struct ListNode
{
	LTDataType val;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;



// ����һ�����
LTNode* CreateLTNode(LTDataType x);
// ��ʼ��
LTNode* LTInit();
// ����
void ListDestory(LTNode* pHead);
// ��ӡ
void ListPrint(LTNode* pHead);
// β��
void ListPushBack(LTNode* pHead, LTDataType x);
// βɾ
void ListPopBack(LTNode* pHead);
// ͷ��
void ListPushFront(LTNode* pHead, LTDataType x);
// ͷɾ
void ListPopFront(LTNode* pHead);
// ����
LTNode* ListFind(LTNode* pHead, LTDataType x);
// ��pos��ǰ����в���
void ListInsert(LTNode* pos, LTDataType x);
// ɾ��posλ�õĽڵ�
void ListErase(LTNode* pos);

