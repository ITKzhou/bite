#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>



typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

//��ʼ��
void HeapInit(HP* php);
//����
void HeapDestroy(HP* php);
//����
void HeapPush(HP* php, HPDataType x);
// �涨ɾ���Ѷ������ڵ㣩
void HeapPop(HP* php);
//���ضѶ�Ԫ��
HPDataType HeapTop(HP* php);
//���س���
size_t HeapSize(HP* php);
//�п�
bool HeapEmpty(HP* php);

void Swap(HPDataType* p1, HPDataType* p2);
void ADjustUp(HPDataType* a, int child);
void ADjustDown(HPDataType* a, int size, int parent);


//������
void HeapSort(HPDataType* arr, int size);


void CreateNDate();
void PrintTopK(const char* file, int k);
