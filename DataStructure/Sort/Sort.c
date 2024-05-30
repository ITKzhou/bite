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


// 时间复杂度：O(N^2)
// 最好情况是多少：O(N)
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

// 时间复杂度：O(N^2) 逆序
// 最好的情况：O(N)  顺序有序
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;//end之前是有序的
		int tmp = a[end + 1];
		while (end >= 0) {
			if (tmp < a[end]) {//升序，在前面有序的元素里找第一个比tmp小的，再把tmp插在这个元素之后
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

// 希尔排序
// 平均O(N^1.3)
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
		for (int i = begin + 1; i <= end; ++i)//第一趟，begin与begin + 1比较
		{
			if (a[i] < a[begin]) {
				mini = i;//记录比begin下标元素小的下标
			}
			if (a[i] > a[begin]) {
				maxi = i;//记录比begin下标元素大的下标
			}
		}
		Swap(&a[mini], &a[begin]);
		if (maxi == begin)
		{//若已经是降序，mini走到end位置，maxi没有动还是begin位置
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
		//升序，建大堆，选出大的数往后放，
		if (child + 1 < size && a[child + 1] > a[child]) {
			++child;//假设法，在左右子节点中找到最大的与父节点比较
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
	//建堆>>>升序>>>大堆
	for (int i = (n - 1 - 1) / 2; i >= 0; --i) {//最后一个元素作为子节点找到父节点
		AdjustDown(a, n, i);
	}
	//首尾元素交换后再调整
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

	//begin,(begin+end)/2, end,在三个下标的元素中找到中位数
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	//左边是小于等于a[keyi]的元素    a[keyi]   右边是大于等于a[keyi]的元素
	int left = begin, right = end;
	int keyi = begin;//keyi取左边，则右边找小的元素必须先走
	while (left < right) 
	{
		//右边找小数
		while (left < right && a[right] >= a[begin]) {
			--right;
		}
		//左边找大数
		while (left < right && a[left] <= a[begin]) {
			++left;
		}

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	keyi = left;//调整keyi，进入下一轮快排

	// [begin, keyi-1] keyi [keyi+1, end]，递归，形似二叉树
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}



