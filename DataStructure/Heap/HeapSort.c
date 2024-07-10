#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

//void HeapSort(HPDataType* arr, int sz)//����_�����_ѡ������������
//{
//	//O(N*logN)	���ϵ�������
//	//�ӵڶ������ݿ�ʼ����β�壬ͬʱ�������ϵ�����
//	for (int i = 1; i < sz; i++)
//	{
//		ADjustUp(arr, i);
//	}
//	//��βԪ�ؽ������ٽ������µ����Ҵδ���
//	int end = sz - 1;
//	while (end > 0) {
//		Swap(&arr[0], &arr[end]);
//		ADjustDown(arr, end, 0);
//		--end;
//	}
//}



void HeapSort(HPDataType* arr, int sz)//����_�����_ѡ������������
{
	//O(N)	���µ�������
	//�����һ����֧��㿪ʼ���µ�����ֱ�����������ڵ����
	for (int i = (sz - 1 - 1) / 2; i >= 0; --i)
	{
		ADjustDown(arr, sz, i);
	}
	//�Ѷ�ѡ��һ�������������Ӧ����ĩβ��Ԫ�ؽ������ٽ������µ����Ҵδ���
	//ÿѡ��һ�������´ε����ķ�Χ�ͼ���1
	int end = sz - 1;
	while (end > 0) {
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


