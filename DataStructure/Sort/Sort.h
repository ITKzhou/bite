#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#include "Stack.h"



void Swap(int* p1, int* p2);
void PrintArray(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);
void InsertSort(int* a, int n);

void AdjustDown(int* a, int size, int parent);
void HeapSort(int* a, int n);
void SelectSort(int* a, int n);

void BubbleSort(int* a, int n);
void QuickSortRecursion(int* a, int begin, int end);

// ��������ݹ�ʵ��
// ��������hoare�汾
int PartSort1(int* a, int begin, int end);
// ���������ڿӷ�
int PartSort2(int* a, int begin, int end);
// ��������ǰ��ָ�뷨
int PartSort3(int* a, int begin, int end);
void QuickSortPartN(int* a, int begin, int end);

// �������� �ǵݹ�ʵ��
void QuickSortNonRecursion(int* a, int begin, int end);



