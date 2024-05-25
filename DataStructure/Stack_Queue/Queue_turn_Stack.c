//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//
//
///// @Codeing  :  用队列实现栈
/////                                                                           
/////   https://leetcode.cn/problems/implement-stack-using-queues/                                                                                                                                                     
/////****************************************************************************          
//
/////  时间复杂度： O()                                                            
/////  空间复杂度： O()                                                             


//typedef int QDataType;
//
//typedef struct QNode
//{
//	QDataType val;
//	struct QNode* next;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* phead;
//	QNode* ptail;
//	int size;
//}Queue;
//
//void QInit(Queue* pq) {
//	assert(pq);
//	pq->phead = pq->ptail = NULL;
//	pq->size = 0;
//}
//
//void QDesdroy(Queue* pq) {
//	assert(pq);
//	QNode* cur = pq->phead;
//	while (cur) {
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->phead = pq->ptail = NULL;
//	pq->size = 0;
//}
//
//void QPush(Queue* pq, QDataType x) {
//	assert(pq);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL) {
//		perror("malloc fail");
//		return;
//	}
//	newnode->val = x;
//	newnode->next = NULL;
//	if (pq->ptail == NULL) {
//		pq->ptail = pq->phead = newnode;
//	}
//	else {
//		pq->ptail->next = newnode;
//		pq->ptail = newnode;
//	}
//	pq->size++;
//}
//
//
//void QPop(Queue* pq) {
//	if (pq->phead->next == NULL) {
//		free(pq->phead);
//		pq->phead = pq->ptail = NULL;
//	}
//	// 多个节点时
//	else {
//		QNode* next = pq->phead->next;
//		free(pq->phead);
//		pq->phead = next;
//	}
//	pq->size--;
//}
//
//
//QDataType QFront(Queue* pq) {
//	assert(pq);
//	assert(pq->phead != NULL);
//	return pq->phead->val;
//}
//
//QDataType QBack(Queue* pq) {
//	assert(pq);
//	assert(pq->ptail != NULL);
//	return pq->ptail->val;
//}
//
//bool QEmpty(Queue* pq) {
//	assert(pq);
//	return pq->phead == NULL;
//}
//
//int QSize(Queue* pq) {
//	assert(pq);
//	return pq->size;
//}
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* ptr = (MyStack*)malloc(sizeof(MyStack));
//	if (ptr == NULL) {
//		perror("malloc fail");
//		exit(-1);
//	}
//	QInit(&ptr->q1);
//	QInit(&ptr->q2);
//	return ptr;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	assert(obj);
//	if (!QEmpty(&obj->q1)) {//入栈操作相当于给非空队列进行入队操作
//		QPush(&obj->q1, x);
//	}
//	else {
//		QPush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	assert(obj);
//	Queue* empty = &obj->q1;//假设法，在两个队列中找到非空队列
//	Queue* nonempty = &obj->q2;
//	if (!QEmpty(&obj->q1)) {
//		empty = &obj->q2;
//		nonempty = &obj->q1;
//	}
//	while (QSize(nonempty) > 1) {//把非空队列的n-1个结点插入到空的队列中
//		QPush(empty, QFront(nonempty));
//		QPop(nonempty);
//	}
//	int top = QFront(nonempty);//非空队列的队头结点就是栈顶元素
//	QPop(nonempty);//相当于移除栈顶元素
//	return top;
//}
//
//int myStackTop(MyStack* obj) {
//	assert(obj);
//	if (!QEmpty(&obj->q1)) {
//		return QBack(&obj->q1);
//	}
//	else {
//		return QBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return obj->q1.size == 0 && obj->q2.size == 0;
//}
//
//void myStackFree(MyStack* obj) {
//	assert(obj);
//	QDesdroy(&obj->q1);
//
//	QDesdroy(&obj->q2);
//	free(obj);
//}
//
//int main()
//{
//	MyStack* obj = myStackCreate();
//	myStackPush(obj, 1);
//	printf("%d\n", myStackPop(obj));
//	myStackPush(obj, 2);
//	
//	printf("%d\n", myStackTop(obj));
//
//	printf("%d\n", myStackEmpty(obj));
//
//	myStackFree(obj);
//
//	return 0;
//}
