#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>


typedef struct BinaryTreeNode* QDataType;

typedef struct QueueNode
{
	QDataType val;
	struct QueueNode* next;
}QNode;


typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestroy(Queue* pq);
//插入
void QueuePush(Queue* pq, QDataType x);
//删除
void QueuePop(Queue* pq);
//取队头
QDataType QueueFront(Queue* pq);
//取队尾
QDataType QueueBack(Queue* pq);
//判空队列
bool QueueEmpty(Queue* pq);
//取队列长度
int QueueSize(Queue* pq);
