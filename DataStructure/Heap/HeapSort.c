#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void HeapSort(HPDataType* arr, int size)//升序
{
	//O(N*logN)	建大堆
	//for (int i = 1; i < size; i++)
	//{
	//	ADjustUp(arr, i);//依次向前一个元素尾插，同时进行向上调整建
	//}
	
	//O(N)	升序——选出大的数往后放
	for (int i = (size - 1 - 1) / 2; i >= 0; --i)//最后一个元素找父节点
	{
		ADjustDown(arr, size, i);
	}
	//选数
	int end = size - 1;
	while (end > 0) {//堆顶选出一个最大数，与相应数组末尾的元素交换，再进行向下调整找次大数
		Swap(&arr[0], &arr[end]);
		ADjustDown(arr, end, 0);
		--end;
	}
}

void CreateNDate()
{
	// 造数据
	int n = 10000000;
	srand((unsigned int)time(NULL));
	char* file = "data.txt";
	FILE* fout = fopen(file, "w");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		int x = (rand() + i) % 10000000;
		fprintf(fout, "%d\n", x);
	}

	fclose(fout);
}


void PrintTopK(const char* file, int k)
{
	//打开文件
	FILE* fin = fopen(file, "r");
	if (file == NULL){
		perror("fopen error");
		exit(-1);
	}
	//建一个k个元素的数组
int* minHeap = (int*)malloc(sizeof(int) * k);
	if (minHeap == NULL) {
		perror("malloc error");
		exit(-1);
	}
	//读取文件的前k个数据，存到数组中，同时向上调整建小堆
	for (int i = 0; i < k; i++)
	{
		fscanf(fin, "%d", &minHeap[i]);
		ADjustUp(minHeap, i);
	}
	//k之后的数据大于堆顶元素，就替换，再进行向下调整
	int x = 0;
	while (fscanf(fin, "%d", &x) != EOF) {
		if (x > minHeap[0]) {
			minHeap[0] = x;
			ADjustDown(minHeap, k, 0);
		}
	}
	for (int i = k - 1; i >= 0; i--)
	{
		printf("%d ", minHeap[i]);
	}
	puts("\n");

	free(minHeap);
	fclose(fin);
}


