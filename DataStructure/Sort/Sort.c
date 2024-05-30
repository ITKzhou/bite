#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

void PrintArray(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


// ʱ�临�Ӷȣ�O(N^2)
// �������Ƕ��٣�O(N)
void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		bool isExchange = false;
		for (int i = 1; i < n - j; i++)
		{
			if (a[i - 1] > a[i]) {
				Swap(&a[i - 1], &a[i]);
				isExchange = true;
			}
		}
		if (isExchange == false) {
			break;
		}
	}
}

// ʱ�临�Ӷȣ�O(N^2) ����
// ��õ������O(N)  ˳������
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;//end֮ǰ�������
		int tmp = a[end + 1];
		while (end >= 0) {
			if (tmp < a[end]) {//������ǰ�������Ԫ�����ҵ�һ����tmpС�ģ��ٰ�tmp�������Ԫ��֮��
				a[end + 1] = a[end];
				--end;
			}
			else {//tmp >= a[end]
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

// ϣ������
// ƽ��O(N^1.3)
void ShellSort(int* a, int n)
{
	assert(a);
	int gap = n;
	while (gap > 1) {
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0) {
				if (tmp < a[end]) {
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}



void SelectSort(int* a, int n)
{
	assert(a);
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin + 1; i <= end; ++i)//��һ�ˣ�begin��begin + 1�Ƚ�
		{
			if (a[i] < a[begin]) {
				mini = i;//��¼��begin�±�Ԫ��С���±�
			}
			if (a[i] > a[begin]) {
				maxi = i;//��¼��begin�±�Ԫ�ش���±�
			}
		}
		Swap(&a[mini], &a[begin]);
		if (maxi == begin)
		{//���Ѿ��ǽ���mini�ߵ�endλ�ã�maxiû�ж�����beginλ��
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		++begin;
		--end;
	}	
}


void AdjustDown(int* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		//���򣬽���ѣ�ѡ�����������ţ�
		if (child + 1 < size && a[child + 1] > a[child]) {
			++child;//���跨���������ӽڵ����ҵ������븸�ڵ�Ƚ�
		}
		if (a[child] > a[parent]){
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}	
	}
}

void HeapSort(int* a, int n)
{
	//����>>>����>>>���
	for (int i = (n - 1 - 1) / 2; i >= 0; --i) {//���һ��Ԫ����Ϊ�ӽڵ��ҵ����ڵ�
		AdjustDown(a, n, i);
	}
	//��βԪ�ؽ������ٵ���
	int end = n - 1;
	while (end > 0) {
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}



int Getkeyi(int* a, int begin, int end)
{
	int midi = (begin + end) / 2;
	if (a[begin] < a[midi])
	{
		if (a[midi] < a[end])
			return midi;
		else if (a[begin] > a[end])
			return begin;
		else
			return end;
	}
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end) {
		return;
	}

	//begin,(begin+end)/2, end,�������±��Ԫ�����ҵ���λ��
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	//�����С�ڵ���a[keyi]��Ԫ��    a[keyi]   �ұ��Ǵ��ڵ���a[keyi]��Ԫ��
	int left = begin, right = end;
	int keyi = begin;//keyiȡ��ߣ����ұ���С��Ԫ�ر�������
	while (left < right) 
	{
		//�ұ���С��
		while (left < right && a[right] >= a[begin]) {
			--right;
		}
		//����Ҵ���
		while (left < right && a[left] <= a[begin]) {
			++left;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	keyi = left;//����keyi��������һ�ֿ���

	// [begin, keyi-1] keyi [keyi+1, end]���ݹ飬���ƶ�����
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}



