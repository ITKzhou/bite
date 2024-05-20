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




//初始化
void SLInit(SL* ps1);
//打印
void SLPrint(SL* ps1);
//销毁
void SLDestroyed(SL* ps1);
//尾插法
void SLPushBack(SL* ps1, SLDataType x);
//头插法
void SLPushFront(SL* ps1, SLDataType x);
//尾删
void SLPopBack(SL* ps1);
//头删
void SLPopFront(SL* ps1);
//检查扩容
void SLCheckCapacity(SL* ps1);
//在任意下标插入
void SLInsert(SL* ps1, int pos, SLDataType x);
//在任意下标删除
void SLErase(SL* ps1, int pos);
//查找某个元素，返回下标
int SLFind(SL* ps1, SLDataType x);
