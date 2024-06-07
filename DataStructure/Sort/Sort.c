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
	{// begin midi end 三个数选中位数
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
	QuickSortRecursion(a, begin, keyi - 1);
	QuickSortRecursion(a, keyi + 1, end);
}

//hoare
int PartSort1(int* a, int begin, int end)
{
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	int left = begin, right = end;
	int keyi = begin;//keyi取左边，则右边找小的元素必须先走
	while (left < right){
		//右边找小
		while (left < right && a[right] >= a[begin]) {
			--right;
		}
		//左边找大
		while (left < right && a[left] <= a[begin]) {
			++left;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	keyi = left;
	return keyi;
}
// 快速排序挖坑法
// 保留开始元素，并且开始位置为坑，先右指针遍历找小的放进左边的坑里，同时右指针设置为新坑
// 再左指针遍历找大的放进右边的坑里，同时左指针又设置为新坑
int PartSort2(int* a, int begin, int end)//左闭右闭
{
	int midi = Getkeyi(a, begin, end);
	Swap(&a[begin], &a[midi]);

	int key = a[begin];
	int hole = begin;//下标
	int left = begin + 1, right = end;

	while (left < right)
	{
		while (left < right && a[right] >= key) {
			--right;
		}
		a[hole] = a[right];//右边找到小的就放进左边的坑里
		hole = right;//放进去后，该位置就变为坑

		while (left < right && a[left] <= key) {
			++left;
		}
		a[hole] = a[left];
		hole = left;
	}
	a[hole] = key;//循环结束，左右两边相遇时的位置一定是坑
	return hole;//把key值放进去，返回左边下标，
}
// 快速排序快慢指针法
// 快指针遇到小于key下标的元素时，慢指针加1后再交换，交换后快指针加1，继续遍历
// 快指针遇到大于key下标的元素时，直接加1后继续遍历
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
	StackPush(&s, begin);//后进先出
	while (!StackEmpty(&s))
	{
		int left = StackTop(&s);
		StackPop(&s);
		int right = StackTop(&s);
		StackPop(&s);

		//第一趟快排
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
	int midi = (begin + end) / 2;//分为[begin, mid][mid+1, end]左右区间
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
