#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


void TestSort()
{
	int arr[] = { 3,1,8,5,0,7,2,6,9,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("BubbleSort:>\n");
	BubbleSort(arr, sz);
	PrintArray(arr, sz);

	printf("InsertSort:>\n");
	InsertSort(arr, sz);
	PrintArray(arr, sz);

	printf("ShellSort:>\n");
	ShellSort(arr, sz);
	PrintArray(arr, sz);

	printf("SelectSort:>\n");
	SelectSort(arr, sz);
	PrintArray(arr, sz);

	printf("HeapSort:>\n");
	HeapSort(arr, sz);
	PrintArray(arr, sz);

	printf("QuickSort:>\n");
	QuickSort(arr, 0, sz - 1);
	PrintArray(arr, sz);

}

int main()
{
	TestSort();


	return 0;
}

