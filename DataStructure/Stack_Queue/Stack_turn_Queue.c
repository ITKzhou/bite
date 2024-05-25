//#define _CRT_SECURE_NO_WARNINGS 1



///@Problem : 用栈实现队列
///                                                                           
///  https://leetcode.cn/problems/implement-queue-using-stacks/description/                                                                          
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///一个栈作入队栈pushst，另一个栈作出队栈popst
///出队栈不为空时，直接进行出栈操作
///出队栈若为空，则把入队栈全部元素导入到出队栈，再进行出栈操作                                                                                                                                                      
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
//	int _top;		// 栈顶
//	int _capacity;  // 容量 
//}Stack;
//
//// 初始化栈 
//void StackInit(Stack* ps);
//// 入栈 
//void StackPush(Stack* ps, STDataType x);
//// 出栈 
//void StackPop(Stack* ps);
//// 获取栈顶元素 
//STDataType StackTop(Stack* ps);
//// 获取栈中有效元素个数 
//int StackSize(Stack* ps);
//// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
//bool StackEmpty(Stack* ps);
//// 销毁栈 
//void StackDestroy(Stack* ps);
//
//
//
//
//void StackInit(Stack* ps) {
//	assert(ps);
//	ps->_a = NULL;
//	ps->_capacity = 0;
//	ps->_top = 0;// 表示top指向栈顶元素的下一个位置
//	//pst->top = -1;// 表示top指向栈顶元素
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
//	return ps->_top;//实质是下标，或是指针
//}
//
//bool StackEmpty(Stack* ps) {
//	assert(ps);
//	return ps->_top == 0;//为空，返回真，即1；不为空，返回假，即0
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

///  时间复杂度： O()                                                            
///  空间复杂度： O()                                                                        

///————————————————————————————————————————————————————————————————————————————  
