#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


void TestSort()
{
	int arr[] = { 3,1,8,5,0,7,2,6,9,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	PrintArray(arr, sz);

	InsertSort(arr, sz);
	PrintArray(arr, sz);

	ShellSort(arr, sz);
	PrintArray(arr, sz);
}

int main()
{
	TestSort();


	return 0;
}

