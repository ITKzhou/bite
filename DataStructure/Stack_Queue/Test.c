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