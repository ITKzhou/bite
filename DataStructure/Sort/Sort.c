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
	{// begin midi end ������ѡ��λ��
		if (a[midi] < a[end])
			return midi;
		else if (a[begin] > a[end])
			return begin;
		else
			return end;
	}
	else
	{
		if (a[midi] > a[end])
			return midi;
		else if (a[begin] < a[end])
			return begin;
		else
			return end;
	}
}

void QuickSortRecursion(int* a, int begin, int end)
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
	QuickSortRecursion(a, begin, keyi - 1);
	QuickSortRecursion(a, keyi + 1, end);
}

//hoare
int PartSort1(int* a, int begin, int end)
{
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	int left = begin, right = end;
	int keyi = begin;//keyiȡ��ߣ����ұ���С��Ԫ�ر�������
	while (left < right){
		//�ұ���С
		while (left < right && a[right] >= a[begin]) {
			--right;
		}
		//����Ҵ�
		while (left < right && a[left] <= a[begin]) {
			++left;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	keyi = left;
	return keyi;
}
// ���������ڿӷ�
// ������ʼԪ�أ����ҿ�ʼλ��Ϊ�ӣ�����ָ�������С�ķŽ���ߵĿ��ͬʱ��ָ������Ϊ�¿�
// ����ָ������Ҵ�ķŽ��ұߵĿ��ͬʱ��ָ��������Ϊ�¿�
int PartSort2(int* a, int begin, int end)//����ұ�
{
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	int key = a[begin];
	int hole = begin;//�±�
	int left = begin + 1, right = end;

	while (left < right)
	{
		while (left < right && a[right] >= key) {
			--right;
		}
		a[hole] = a[right];//�ұ��ҵ�С�ľͷŽ���ߵĿ���
		hole = right;//�Ž�ȥ�󣬸�λ�þͱ�Ϊ��

		while (left < right && a[left] <= key) {
			++left;
		}
		a[hole] = a[left];
		hole = left;
	}
	a[hole] = key;//ѭ��������������������ʱ��λ��һ���ǿ�
	return hole;//��keyֵ�Ž�ȥ����������±꣬
}
// �����������ָ�뷨
// ��ָ������С��key�±��Ԫ��ʱ����ָ���1���ٽ������������ָ���1����������
// ��ָ����������key�±��Ԫ��ʱ��ֱ�Ӽ�1���������
int PartSort3(int* a, int begin, int end)
{
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	int keyi = begin;
	int prev = begin, cur = begin + 1;
	while (cur <= end)
	{
		if (a[cur] <= a[keyi] && ++prev != cur) {
			Swap(&a[prev], &a[cur]);
		}
		++cur;
	}
	Swap(&a[prev], &a[keyi]);
	keyi = prev;
	return keyi;
}

void QuickSortPartN(int* a, int begin, int end)
{
	if (begin >= end) {
		return;
	}
	int keyi = PartSort3(a, begin, end);
	QuickSortPartN(a, begin, keyi - 1);
	QuickSortPartN(a, keyi + 1, end);
}

void QuickSortNonRecursion(int* a, int begin, int end)
{
	Stack s;
	StackInit(&s);
	StackPush(&s, end);
	StackPush(&s, begin);//����ȳ�
	while (!StackEmpty(&s))
	{
		int left = StackTop(&s);
		StackPop(&s);
		int right = StackTop(&s);
		StackPop(&s);

		//��һ�˿���
		int keyi = PartSort3(a, left, right);
		if (keyi + 1 < right) {
			StackPush(&s, right);
			StackPush(&s, keyi + 1);
		}
		if (left < keyi - 1) {
			StackPush(&s, keyi - 1);
			StackPush(&s, left);
		}
	}
	StackDestroy(&s);
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end) {
		return;
	}
	int midi = (begin + end) / 2;//��Ϊ[begin, mid][mid+1, end]��������
	_MergeSort(a, begin, midi, tmp);
	_MergeSort(a, midi + 1, end, tmp);

	int begin1 = begin, end1 = midi;
	int begin2 = midi + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2]) {
			tmp[i++] = a[begin1++];
		}
		else {
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1) {
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2) {
		tmp[i++] = a[begin2++];
	}
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}
	

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);

}
