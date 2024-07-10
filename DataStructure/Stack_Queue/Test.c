#define _CRT_SECURE_NO_WARNINGS 1

//#include "Stack.h"
//
//
//void TestStack() {
//	Stack st;
//	StackInit(&st);
//
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	StackPush(&st, 5);
//	StackPush(&st, 6);
//	StackPush(&st, 7);
//	printf("StackEmpty=%d\n", StackEmpty(&st));
//	printf("size=%d\n", StackSize(&st));
//	while (!StackEmpty(&st)) {
//		printf("%d ", StackTop(&st));
//		StackPop(&st);
//	}
//	StackDestroy(&st);
//	printf("\nStackEmpty=%d\n", StackEmpty(&st));
//}
//
//int main()
//{
//	TestStack();
//
//	return 0;
//}





//#include "Queue.h"
//
//
//void TestQueue() {
//	Queue sq;
//	QueueInit(&sq);
//
//	QueuePush(&sq, 1);
//	QueuePush(&sq, 2);
//	QueuePush(&sq, 3);
//	QueuePush(&sq, 4);
//	QueuePush(&sq, 5);
//
//	printf("back=%d\n", QueueBack(&sq));
//	printf("size=%d\n", QueueSize(&sq));
//	while (!QueueEmpty(&sq)) {
//		printf("%d ", QueueFront(&sq));
//		QueuePop(&sq);
//	}
//	printf("\n");
//
//	printf("size=%d\n", QueueSize(&sq));
//	
//
//	printf("%d ", QueueFront(&sq));
//	QueuePop(&sq);
//
//	QueueDestroy(&sq);
//}
//
//
//int main()
//{
//	TestQueue();
//
//	return 0;
//}


