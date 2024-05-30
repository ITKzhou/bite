#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>



void Swap(int* p1, int* p2);
void PrintArray(int* a, int n);


void InsertSort(int* a, int n);
// 希尔排序
void ShellSort(int* a, int n);

void SelectSort(int* a, int n);
void AdjustDown(int* a, int size, int parent);
void HeapSort(int* a, int n);

void BubbleSort(int* a, int n);
void QuickSort(int* a, int begin, int end);


// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right);
// 快速排序挖坑法
int PartSort2(int* a, int left, int right);
// 快速排序前后指针法
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);

