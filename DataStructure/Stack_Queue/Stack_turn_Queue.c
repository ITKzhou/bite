//#define _CRT_SECURE_NO_WARNINGS 1



///@Problem : ��ջʵ�ֶ���
///                                                                           
///  https://leetcode.cn/problems/implement-queue-using-stacks/description/                                                                          
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
///@Codeing :
///                                                                           
///һ��ջ�����ջpushst����һ��ջ������ջpopst
///����ջ��Ϊ��ʱ��ֱ�ӽ��г�ջ����
///����ջ��Ϊ�գ�������ջȫ��Ԫ�ص��뵽����ջ���ٽ��г�ջ����                                                                                                                                                      
///****************************************************************************          

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//
//
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* _a;
//	int _top;		// ջ��
//	int _capacity;  // ���� 
//}Stack;
//
//// ��ʼ��ջ 
//void StackInit(Stack* ps);
//// ��ջ 
//void StackPush(Stack* ps, STDataType x);
//// ��ջ 
//void StackPop(Stack* ps);
//// ��ȡջ��Ԫ�� 
//STDataType StackTop(Stack* ps);
//// ��ȡջ����ЧԪ�ظ��� 
//int StackSize(Stack* ps);
//// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
//bool StackEmpty(Stack* ps);
//// ����ջ 
//void StackDestroy(Stack* ps);
//
//
//
//
//void StackInit(Stack* ps) {
//	assert(ps);
//	ps->_a = NULL;
//	ps->_capacity = 0;
//	ps->_top = 0;// ��ʾtopָ��ջ��Ԫ�ص���һ��λ��
//	//pst->top = -1;// ��ʾtopָ��ջ��Ԫ��
//}
//
//void StackPush(Stack* ps, STDataType x) {
//	assert(ps);
//	if (ps->_top == ps->_capacity) {
//		STDataType newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->_a, sizeof(STDataType) * newcapacity);
//		if (tmp == NULL) {
//			perror("realloc fail");
//			return;
//		}
//		ps->_a = tmp;
//		ps->_capacity = newcapacity;
//	}
//	ps->_a[ps->_top] = x;
//	ps->_top++;
//}
//
//void StackPop(Stack* ps) {
//	assert(ps);
//	assert(ps->_top > 0);
//	ps->_top--;
//}
//
//STDataType StackTop(Stack* ps) {
//	assert(ps);
//	assert(ps->_top > 0);
//	return ps->_a[ps->_top - 1];
//}
//
//int StackSize(Stack* ps) {
//	assert(ps);
//	return ps->_top;//ʵ�����±꣬����ָ��
//}
//
//bool StackEmpty(Stack* ps) {
//	assert(ps);
//	return ps->_top == 0;//Ϊ�գ������棬��1����Ϊ�գ����ؼ٣���0
//}
//
//void StackDestroy(Stack* ps) {
//	assert(ps);
//	free(ps->_a);
//	ps->_a = NULL;
//	ps->_top = ps->_capacity = 0;
//}
//
//typedef struct {
//	Stack pushst;
//	Stack popst;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	if (obj == NULL) {
//		perror("malloc fail");
//		exit(-1);
//	}
//	StackInit(&obj->pushst);
//	StackInit(&obj->popst);
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushst, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//	int front = myQueuePeek(obj);
//	StackPop(&obj->popst);
//	return front;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (StackEmpty(&obj->popst)) {
//		while (!StackEmpty(&obj->pushst)) {
//			StackPush(&obj->popst, StackTop(&obj->pushst));
//			StackPop(&obj->pushst);
//		}
//	}
//	return StackTop(&obj->popst);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->pushst);
//	StackDestroy(&obj->popst);
//	free(obj);
//}

///  ʱ�临�Ӷȣ� O()                                                            
///  �ռ临�Ӷȣ� O()                                                                        

///��������������������������������������������������������������������������������������������������������������������������������������������������������  
