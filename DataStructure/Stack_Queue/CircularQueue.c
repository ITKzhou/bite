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
/////@Problem : 设计循环队列
/////                                                                           
/////   https://leetcode.cn/problems/design-circular-queue/description/                                                                         
/////————————————————————————————————————————————————————————————————————————————            
/////@Codeing :
/////                                                                           
/////                                                                                                                                                        
/////****************************************************************************          
//
//
//
//
// 尾下标的下一个等于首下标就为满，模size+1个就构成循环队列

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
//        (CQDataType*)malloc((k + 1) * sizeof(CQDataType)); // 开k+1长度的数组
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
//    MyCircularQueue* obj) { // 尾下标的下一个等于首下标就满了
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
//    // 计算循环队列的尾下标
//    return obj->data[(obj->rear - 1 + obj->size + 1) % (obj->size + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->data);
//    free(obj);
//}
//
//
///////  时间复杂度： O()                                                            
/////  空间复杂度： O()                                                                        
//
/////————————————————————————————————————————————————————————————————————————————  
//
