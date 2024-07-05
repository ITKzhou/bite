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


//��ӡ
void SLTPrint(SLNode* phead);
//����һ���µĽ��
SLNode* CreateNode(SLNDataType x);
//������β��
void SLTPushBack(SLNode** pphead, SLNDataType x);
//������ͷ��
void SLTPushFront(SLNode** pphead, SLNDataType x);
//������βɾ
void SLTPopBack(SLNode** pphead);
//������ͷɾ
void SLTPopFront(SLNode** pphead);
// ���������
SLNode* SListFind(SLNode* phead, SLNDataType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SLNode* pos, SLNDataType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SLNode* pos);

// ��pos��ǰ�����
void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x);
// ɾ��posλ��
void SLTErase(SLNode** pphead, SLNode* pos);
//���ٵ�����
void SLTDestroy(SLNode** pphead);










