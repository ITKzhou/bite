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
