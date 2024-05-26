#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"



void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
	
}

void Swap(HPDataType* p1, HPDataType* p2) {
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void ADjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;//求父节点的下标
	while (child > 0){
		if (a[child] < a[parent]) {//小堆，父节点 <= 孩子节点
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else {
			break;
		}
	}
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	//扩容
	if (php->size == php->capacity){
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* cap = (HPDataType*)realloc(php->a, newcapacity * sizeof(HPDataType));
		if (cap == NULL) {
			perror("realloc fail");
			exit(-1);
		}
		php->a = cap;
		php->capacity = newcapacity;
	}
	php->a[php->size] = x;//堆尾插入
	php->size++;
	
	ADjustUp(php->a, php->size - 1);//堆向上调整
}

void ADjustDown(HPDataType* a, int size, int parent)
{
	int child = parent * 2 + 1;//假设左孩子节点小
	while (child < size) {
		if (child < size && a[child + 1] < a[child]) {//避免因右孩子节点不存在，出现的越界访问
			++child;//否则，取右孩子节点
		}
		if (a[child] < a[parent]) {//小堆
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}

void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);//移除堆顶的元素，先与堆尾的元素交换，再尾删
	php->size--;

	ADjustDown(php->a, php->size,0);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}

size_t HeapSize(HP* php)
{
	assert(php);
	return php->size;
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

