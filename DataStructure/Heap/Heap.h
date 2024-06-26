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

//初始化
void HeapInit(HP* php);
//销毁
void HeapDestroy(HP* php);
//插入
void HeapPush(HP* php, HPDataType x);
// 规定删除堆顶（根节点）
void HeapPop(HP* php);
//返回堆顶元素
HPDataType HeapTop(HP* php);
//返回长度
size_t HeapSize(HP* php);
//判空
bool HeapEmpty(HP* php);

void Swap(HPDataType* p1, HPDataType* p2);
void ADjustUp(HPDataType* a, int child);
void ADjustDown(HPDataType* a, int size, int parent);


//堆排序
void HeapSort(HPDataType* arr, int size);


void CreateNDate();
void PrintTopK(const char* file, int k);
