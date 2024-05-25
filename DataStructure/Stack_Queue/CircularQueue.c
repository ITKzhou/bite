//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//
//
//
/////@Time    :
//
/////@Problem : ���ѭ������
/////                                                                           
/////   https://leetcode.cn/problems/design-circular-queue/description/                                                                         
/////��������������������������������������������������������������������������������������������������������������������������������������������������������            
/////@Codeing :
/////                                                                           
/////                                                                                                                                                        
/////****************************************************************************          
//
//
//
//
//typedef struct {
//	int* data;
//	int front;
//	int rear;
//	int cap;
//} MyCircularQueue;
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {//��Ҫȷ���±�ʱ����Ҫ�����±���ѭ����ı仯����ȡģ
//	return (obj->rear + 1) % (obj->cap + 1) == obj->front;
//}
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	if (obj == NULL) {
//		perror("malloc fail");
//		exit(-1);
//	}
//	obj->data = (int*)malloc(sizeof(int) * (k + 1));//β�±�ʼ��ָ��Ԫ�ص���һλ����ָ��k+1ʱ�ͽ���ѭ��
//	obj->front = 0;
//	obj->rear = 0;
//	obj->cap = k;//��Ч����Ϊk
//
//	return obj;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj)) {
//		return false;
//	}
//	obj->data[obj->rear] = value;
//	obj->rear++;
//	obj->rear %= (obj->cap + 1);//β�±�������cap+1ʱ����ѭ�����±귶Χ��[0��cap+1)
//
//	return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj)) {
//		return false;
//	}
//	obj->front++;//ͷ�±�ʼ��ָ��Ԫ�أ�����һ����������һ��
//	obj->front %= obj->cap + 1;//�±귶Χ��[0��cap+1)
//
//	return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj)) {
//		return -1;
//	}
//	return obj->data[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj)) {
//		return -1;
//	}//ʵ����ȡβ�±��1��Ԫ�أ�β�±������Ч�����ٶ�������Χȡģ
//	return obj->data[(obj->rear - 1 + obj->cap + 1) % (obj->cap + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->data);
//	free(obj);
//}
//
/////  ʱ�临�Ӷȣ� O()                                                            
/////  �ռ临�Ӷȣ� O()                                                                        
//
/////��������������������������������������������������������������������������������������������������������������������������������������������������������  
//
