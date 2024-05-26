#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


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



