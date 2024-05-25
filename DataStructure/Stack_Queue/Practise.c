//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//
//
////Êý×éÕ»Á·Ï°
//
//typedef int STDataType;
//
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}Stack;
//
//
//void STInit(Stack* st) {
//	assert(st);
//	st->a = NULL;
//	st->top = st->capacity = 0;
//}
//
//void STDesdroy(Stack* st) {
//	assert(st);
//	free(st->a);
//	st->a = NULL;
//	st->top = st->capacity = 0;
//}
//
//void STPush(Stack* st, STDataType x) {
//	assert(st);
//	if (st->top == st->capacity) {
//		int newcapacity = st->capacity == 0 ? 4 : st->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(st->a, sizeof(STDataType) * newcapacity);
//		if (tmp == NULL) {
//			perror("realloc fail");
//			return;
//		}
//		st->a = tmp;
//		st->capacity = newcapacity;
//	}
//	st->a[st->top] = x;
//	st->top++;
//}
//
//void STPop(Stack* st) {
//	assert(st);
//	assert(st->top > 0);//²»ÄÜÎª¿Õ
//	st->top--;
//}
//
//STDataType STTop(Stack* st) {
//	assert(st);
//	assert(st->top > 0);
//	return st->a[st->top - 1];
//}
//
//bool STEmpty(Stack* st) {
//	assert(st);
//	return st->top == 0;
//}
//
//int STSize(Stack* st) {
//	assert(st);
//	return st->top;
//}
//
//
//
//
//
//
//
//
////int main()
////{
////	Stack k;
////	STInit(&k);
////
////	STPush(&k, 1);
////	STPush(&k, 2);
////	STPush(&k, 3);
////	STPush(&k, 4);
////	printf("%d\n", STEmpty(&k));
////	printf("%d\n", STSize(&k));
////	while (!STEmpty(&k)) {
////		printf("%d ", STTop(&k));
////		STPop(&k);
////	}
////	printf("\n%d\n", STEmpty(&k));
////
////	STDesdroy(&k);
////}
//
//
//
////Á´Ê½¶ÓÁÐÁ·Ï°
//
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
//void QPop(Queue* pq) {
//	assert(pq);
//	assert(pq->phead != NULL);
//	QNode* del = pq->phead;
//	pq->phead = pq->phead->next;
//	free(del);
//	del = NULL;
//	pq->size--;
//}
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
//
////int main()
////{
////	Queue q;
////	QInit(&q);
////
////	QPush(&q, 1);
////	QPush(&q, 2);
////	QPush(&q, 3);
////	QPush(&q, 4);
////	printf("%d \n", QEmpty(&q));
////	/*while (!QEmpty(&q)) {
////		printf("%d ", QFront(&q));
////		QPop(&q);
////	}*/
////	//QPop(&q);
////	printf("%d \n", QFront(&q));
////	QPop(&q);
////
////	printf("%d \n", QFront(&q));
////	QPop(&q);
////	
////	printf("%d \n", QSize(&q));
////
////	printf("%d \n", QFront(&q));
////	QPop(&q);
////
////	printf("%d \n", QFront(&q));
////	QPop(&q);
////
////	printf("%d \n", QSize(&q));
////	printf("%d \n", QEmpty(&q));
////
////	printf("%d \n", QFront(&q));
////	QPop(&q);
////
////
////	return 0;
////}
//
//
//
//
//
/////@Problem : ÓÐÐ§µÄÀ¨ºÅ
/////                                                                           
/////   https://leetcode.cn/problems/valid-parentheses/description/                                                                         
/////¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª            
/////@Codeing :
/////                                                                           
/////                                                                                                                                                        
/////****************************************************************************          
////bool isValid(char* s) {
////	Stack st;
////	
////	STInit(&st);
////	while (*s) {
////		if (*s == '(' || *s == '{' || *s == '[') {
////			STPush(&st, *s);
////		}
////		else {
////			if (STEmpty(&st)) 
////			{
////				STDesdroy(&st);
////				return false;
////			}
////
////			char top = STTop(&st);
////			STPop(&st);
////
////			if ((*s == ')' && top != '(')
////			  ||(*s == '}' && top != '{')
////			  ||(*s == ']' && top != '[')) 
////			{
////				STDesdroy(&st);
////				return false;
////			}
////		}
////		++s;
////	}
////
////	bool ret = STEmpty(&st);
////	STDesdroy(&st);
////	return ret;
////}
////
////int main()
////{
////	char arr[] = "(]";
////	bool r = isValid(arr);
////	printf("%d ", r);
////	return 0;
////}
//
//
/////  Ê±¼ä¸´ÔÓ¶È£º O()                                                            
/////  ¿Õ¼ä¸´ÔÓ¶È£º O()                                                                        
//
/////¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª  
//
