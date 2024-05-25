////#define _CRT_SECURE_NO_WARNINGS 1
////
////#include "Stack.h"
////#include "Queue.h"
////
////
////void TestQueue() {
////	Queue sq;
////	QueueInit(&sq);
////
////	QueuePush(&sq, 1);
////	QueuePush(&sq, 2);
////	QueuePush(&sq, 3);
////	QueuePush(&sq, 4);
////	QueuePush(&sq, 5);
////	
////	while (!QueueEmpty(&sq)) {
////		printf("%d ", QueueFront(&sq));
////		QueuePop(&sq);
////	}
////
////	QueueDestroy(&sq);
////}
////
////
////
////
////void TestStack() {
////	Stack st;
////	StackInit(&st);
////
////	StackPush(&st, 1);
////	StackPush(&st, 2);
////	StackPush(&st, 3);
////	StackPush(&st, 4);
////	StackPush(&st, 5);
////	StackPush(&st, 6);
////	StackPush(&st, 7);
////	printf("StackEmpty=%d\n", StackEmpty(&st));
////	printf("size=%d\n", StackSize(&st));
////	while (!StackEmpty(&st)) {
////		printf("%d ", StackTop(&st));
////		StackPop(&st);
////	}
////	StackDestroy(&st);
////	printf("\nStackEmpty=%d\n", StackEmpty(&st));
////}
////
////int main()
////{
////	TestStack();
////	
////	//TestQueue();
////
////	return 0;
////}
////
////
//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//
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
//bool isValid(char* s) {
//	Stack st;
//	StackInit(&st);
//	while (*s) {
//		if (*s == '(' || *s == '{' || *s == '[') {
//			StackPush(&st, *s);
//		}
//		else {
//			if (StackEmpty(&st)) {
//				StackDestroy(&st);
//				return false;
//			}
//
//			char top = StackTop(&st);
//			StackPop(&st);
//
//			if ((*s == '(' && top != ')')
//				|| (*s == '{' && top != '}')
//				|| (*s == '[' && top != ']')) {
//				StackDestroy(&st);
//				return false;
//			}
//		}
//		++s;
//	}
//
//	bool ret = StackEmpty(&st);
//	StackDestroy(&st);
//	return ret;
//}
//
//
//
//int main()
//{
//	char arr[] = "(]";
//	bool r = isValid(arr);
//	printf("%d ", r);
//
//	return 0;
//}