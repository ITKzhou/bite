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
//bool myCircularQueueIsFull(MyCircularQueue* obj) {//需要确定下标时，就要考虑下标在循环里的变化，需取模
//	return (obj->rear + 1) % (obj->cap + 1) == obj->front;
//}
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	if (obj == NULL) {
//		perror("malloc fail");
//		exit(-1);
//	}
//	obj->data = (int*)malloc(sizeof(int) * (k + 1));//尾下标始终指向元素的下一位，当指向k+1时就进入循环
//	obj->front = 0;
//	obj->rear = 0;
//	obj->cap = k;//有效长度为k
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
//	obj->rear %= (obj->cap + 1);//尾下标增长到cap+1时，就循环，下标范围是[0，cap+1)
//
//	return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj)) {
//		return false;
//	}
//	obj->front++;//头下标始终指向元素，出队一个就往后走一个
//	obj->front %= obj->cap + 1;//下标范围是[0，cap+1)
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
//	}//实质是取尾下标减1的元素，尾下标加上有效长度再对增长范围取模
//	return obj->data[(obj->rear - 1 + obj->cap + 1) % (obj->cap + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->data);
//	free(obj);
//}
//
/////  时间复杂度： O()                                                            
/////  空间复杂度： O()                                                                        
//
/////————————————————————————————————————————————————————————————————————————————  
//
