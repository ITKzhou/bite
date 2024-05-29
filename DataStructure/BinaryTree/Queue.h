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

//��ʼ��
void QueueInit(Queue* pq);
//����
void QueueDestroy(Queue* pq);
//����
void QueuePush(Queue* pq, QDataType x);
//ɾ��
void QueuePop(Queue* pq);
//ȡ��ͷ
QDataType QueueFront(Queue* pq);
//ȡ��β
QDataType QueueBack(Queue* pq);
//�пն���
bool QueueEmpty(Queue* pq);
//ȡ���г���
int QueueSize(Queue* pq);
