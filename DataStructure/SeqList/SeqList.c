#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"



//初始化
void SLInit(SL* ps1)
{
	assert(ps1);
	ps1->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	ps1->size = 0;
	ps1->capacity = 4;
}

//打印
void SLPrint(SL* ps1)
{
	assert(ps1);
	for (int i = 0; i < ps1->size; ++i)
	{
		printf("%d ", ps1->a[i]);
	}
	putchar('\n');
}

//销毁
void SLDestroyed(SL* ps1)
{
	assert(ps1);
	assert(ps1->a);

	if (ps1->a != NULL)
	{
		free(ps1->a);
		ps1->a = NULL;
		ps1->size = 0;
		ps1->capacity = 0;
	}
}

void SLCheckCapacity(SL* ps1)
{
	assert(ps1);
	if (ps1->size == ps1->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps1->a, sizeof(SLDataType) * ps1->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps1->a = tmp;
		ps1->capacity *= 2;
	}
}

void SLPushBack(SL* ps1, SLDataType x)
{
	assert(ps1);
	//SLCheckCapacity(ps1);
	//ps1->a[ps1->size] = x;
	//ps1->size++;
	SLInsert(ps1, ps1->size, x);
}


void SLPushFront(SL* ps1, SLDataType x)
{
	assert(ps1);
	//SLCheckCapacity(ps1);
	//int end = ps1->size;
	//while (end > 0)//遍历数组，依次把数据往后挪动
	//{
	//	ps1->a[end] = ps1->a[end - 1];
	//	--end;
	//}
	//ps1->a[0] = x;
	//ps1->size++;

	SLInsert(ps1, 0, x);
}

void SLPopBack(SL* ps1)
{
	assert(ps1);
	//assert(ps1->size > 0);
	//ps1->size--;//直接数组长度减1

	SLErase(ps1, ps1->size - 1);
}

void SLPopFront(SL* ps1)
{
	assert(ps1);
	//assert(ps1->size > 0);
	//int start = 0;
	//while (start < ps1->size - 1)
	//{
	//	ps1->a[start] = ps1->a[start + 1];//从头开始依次拿后面一个元素覆盖前面一个，一直到末尾
	//	++start;
	//}
	//ps1->size--;

	SLErase(ps1, 0);
}

void SLInsert(SL* ps1, int pos, SLDataType x)
{
	assert(ps1);
	assert(pos >= 0 && pos <= ps1->size);

	SLCheckCapacity(ps1);
	int end = ps1->size - 1;
	while (end >= pos)
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[pos] = x;
	ps1->size++;
}

void SLErase(SL* ps1, int pos)//pos尾任意有效位置的下标
{
	assert(ps1);
	assert(pos >= 0 && pos < ps1->size);
	size_t start = pos + 1;
	while (start < ps1->size)
	{
		ps1->a[start - 1] = ps1->a[start];
		++start;
	}
	ps1->size--;
}

int SLFind(SL* ps1, SLDataType x)
{
	assert(ps1);

	for (int i = 0; i < ps1->size; i++)
	{
		if (ps1->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SLModify(SL* ps1, int pos, SLDataType x)
{
	assert(ps1);
	assert(pos >= 0 && pos < ps1->size);

	ps1->a[pos] = x;
}
