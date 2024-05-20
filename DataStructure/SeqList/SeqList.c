#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"



//δ���ٿռ�ĳ�ʼ��
void SLInit(SL* ps1)
{
	assert(ps1);

	ps1->a = NULL;
	ps1->size = 0;
	ps1->capacity = 0;
}

//�����˿ռ�ĳ�ʼ��
//void SLInit(SL* ps1)
//{
//	assert(ps1);
//
//
//}

//��ӡ
void SLPrint(SL* ps1)
{
	assert(ps1);

	for (int i = 0; i < ps1->size; ++i)
	{
		printf("%d ", ps1->a[i]);
	}
	putchar('\n');
}

//����
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
		int newCapacity = ps1->capacity == 0 ? 4 : ps1->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps1->a, sizeof(SLDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps1->a = tmp;
		ps1->capacity = newCapacity;
	}
}

void SLPushBack(SL* ps1, SLDataType x)
{
	assert(ps1);

	SLCheckCapacity(ps1);

	ps1->a[ps1->size] = x;
	ps1->size++;
}


void SLPushFront(SL* ps1, SLDataType x)
{
	assert(ps1);

	SLCheckCapacity(ps1);
	
	int end = ps1->size - 1;//�õ����һ��Ԫ�ص��±�
	while (end >= 0)//�������飬���ΰ���������Ų��
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[0] = x;
	ps1->size++;

}


void SLPopBack(SL* ps1)
{
	assert(ps1);
	assert(ps1->size > 0);

	ps1->size--;//ֱ�����鳤�ȼ�1
}


void SLPopFront(SL* ps1)
{
	assert(ps1);
	assert(ps1->size > 0);

	int start = 0;
	while (start < ps1->size)
	{
		ps1->a[start] = ps1->a[start + 1];//��ͷ��ʼ�����ú���һ��Ԫ�ظ���ǰ��һ����һֱ��ĩβ
		++start;
	}
	ps1->size--;
}


void SLInsert(SL* ps1, int pos, SLDataType x)
{
	assert(ps1);
	assert(pos >= 0 && pos <= ps1->size);

	SLCheckCapacity(ps1);
	size_t end = ps1->size - 1;
	while (end >= pos)
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[pos] = x;
	ps1->size++;
}


void SLErase(SL* ps1, int pos)//posβ������Чλ�õ��±�
{
	assert(ps1);
	assert(pos >= 0 && pos <= ps1->size);
	size_t start = pos;
	while (start < ps1->size)
	{
		ps1->a[start] = ps1->a[start + 1];
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
