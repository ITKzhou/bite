#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <windows.system.h>



typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	size_t size;
	size_t capacity;
}SL;




//��ʼ��
void SLInit(SL* ps1);
//��ӡ
void SLPrint(SL* ps1);
//����
void SLDestroyed(SL* ps1);
//β�巨
void SLPushBack(SL* ps1, SLDataType x);
//ͷ�巨
void SLPushFront(SL* ps1, SLDataType x);
//βɾ
void SLPopBack(SL* ps1);
//ͷɾ
void SLPopFront(SL* ps1);
//�������
void SLCheckCapacity(SL* ps1);
//�������±����
void SLInsert(SL* ps1, int pos, SLDataType x);
//�������±�ɾ��
void SLErase(SL* ps1, int pos);
//����ĳ��Ԫ�أ������±�
int SLFind(SL* ps1, SLDataType x);
