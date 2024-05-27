#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"




void TestTopk()
{
	//CreateNDate();
	PrintTopK("Data.txt", 5);

}





void TestHSort()
{
	int arr[] = { 4,2,7,6,3,9,7,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


void TestHeap()
{
	int a[] = { 4,6,2,1,5,8,2,9 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		HeapPush(&hp, a[i]);//Ð¡¶Ñ
	}

	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}
	printf("\n");
}




int main()
{
	//TestHeap();

	TestHSort();
	
	//TestTopk();

	return 0;
}


