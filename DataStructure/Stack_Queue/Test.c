#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"
#include "Queue.h"


void TestQueue() {
	Queue sq;
	QueueInit(&sq);

	QueuePush(&sq, 1);
	QueuePush(&sq, 2);
	QueuePush(&sq, 3);
	QueuePush(&sq, 4);
	QueuePush(&sq, 5);
	
	while (!QueueEmpty(&sq)) {
		printf("%d ", QueueFront(&sq));
		QueuePop(&sq);
	}

	QueueDestroy(&sq);
}




void TestStack() {
	Stack st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPush(&st, 6);
	StackPush(&st, 7);
	printf("StackEmpty=%d\n", StackEmpty(&st));
	printf("size=%d\n", StackSize(&st));
	while (!StackEmpty(&st)) {
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	StackDestroy(&st);
	printf("\nStackEmpty=%d\n", StackEmpty(&st));
}

int main()
{
	//TestStack();
	
	TestQueue();

	return 0;
}


