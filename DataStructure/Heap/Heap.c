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
	int parent = (child - 1) / 2;//�󸸽ڵ���±�
	while (child > 0){
		if (a[child] < a[parent]) {//С�ѣ����⸸�ڵ㶼 С�ڻ���� ���ӽڵ�
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
	//����
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
	php->a[php->size] = x;//��β����
	php->size++;
	
	ADjustUp(php->a, php->size - 1);//�����ϵ���
}

void ADjustDown(HPDataType* a, int size, int parent)
{
	int child = parent * 2 + 1;//�������ӽڵ�С
	while (child < size) {
		if (child + 1 < size && a[child + 1] < a[child]) {//�������Һ��ӽڵ㲻���ڣ����ֵ�Խ�����
			++child;//�Һ���С��ȥ�Һ��ӽڵ�
		}
		if (a[child] < a[parent]) {
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
	assert(!HeapEmpty(php));

	Swap(&php->a[0], &php->a[php->size - 1]);//�Ƴ��Ѷ���Ԫ�أ������β��Ԫ�ؽ�������βɾ
	php->size--;

	ADjustDown(php->a, php->size,0);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));

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

