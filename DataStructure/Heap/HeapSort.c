#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void HeapSort(HPDataType* arr, int size)//����
{
	//O(N*logN)	�����
	//for (int i = 1; i < size; i++)
	//{
	//	ADjustUp(arr, i);//������ǰһ��Ԫ��β�壬ͬʱ�������ϵ�����
	//}
	
	//O(N)	���򡪡�ѡ������������
	for (int i = (size - 1 - 1) / 2; i >= 0; --i)//���һ��Ԫ���Ҹ��ڵ�
	{
		ADjustDown(arr, size, i);
	}
	//ѡ��
	int end = size - 1;
	while (end > 0) {//�Ѷ�ѡ��һ�������������Ӧ����ĩβ��Ԫ�ؽ������ٽ������µ����Ҵδ���
		Swap(&arr[0], &arr[end]);
		ADjustDown(arr, end, 0);
		--end;
	}
}

void CreateNDate()
{
	// ������
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
	//���ļ�
	FILE* fin = fopen(file, "r");
	if (file == NULL){
		perror("fopen error");
		exit(-1);
	}
	//��һ��k��Ԫ�ص�����
int* minHeap = (int*)malloc(sizeof(int) * k);
	if (minHeap == NULL) {
		perror("malloc error");
		exit(-1);
	}
	//��ȡ�ļ���ǰk�����ݣ��浽�����У�ͬʱ���ϵ�����С��
	for (int i = 0; i < k; i++)
	{
		fscanf(fin, "%d", &minHeap[i]);
		ADjustUp(minHeap, i);
	}
	//k֮������ݴ��ڶѶ�Ԫ�أ����滻���ٽ������µ���
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

