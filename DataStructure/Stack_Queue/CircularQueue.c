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
// β�±����һ���������±��Ϊ����ģsize+1���͹���ѭ������

//typedef int CQDataType;
//
//typedef struct {
//    int front;
//    int rear;
//    int size;
//    CQDataType* data;
//} MyCircularQueue;
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->data =
//        (CQDataType*)malloc((k + 1) * sizeof(CQDataType)); // ��k+1���ȵ�����
//    obj->front = obj->rear = 0;
//    obj->size = k;
//
//    return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(
//    MyCircularQueue* obj) { // β�±����һ���������±������
//    return (obj->rear + 1) % (obj->size + 1) == obj->front;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj)) {
//        return false;
//    }
//    obj->data[obj->rear] = value;
//    obj->rear++;
//
//    obj->rear %= (obj->size + 1);
//
//    return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj)) {
//        return false;
//    }
//    obj->front++;
//
//    obj->front %= (obj->size + 1);
//
//    return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj)) {
//        return -1;
//    }
//
//    return obj->data[(obj->front) %= (obj->size + 1)];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj)) {
//        return -1;
//    }
//    // ����ѭ�����е�β�±�
//    return obj->data[(obj->rear - 1 + obj->size + 1) % (obj->size + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->data);
//    free(obj);
//}
//
//
///////  ʱ�临�Ӷȣ� O()                                                            
/////  �ռ临�Ӷȣ� O()                                                                        
//
/////��������������������������������������������������������������������������������������������������������������������������������������������������������  
//
