#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"



int main()
{
	HP hp;
	int arr[] = { 2,7,3,5,9,1 };
	
	HeapInit(&hp);
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		HeapPush(&hp, arr[i]);
	}
	while (!HeapEmpty(&hp)) {
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}
	printf("\n");

	HeapDestroy(&hp);
	return 0;
}


