#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//�����������±�ɾ��
void TestSL5()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 6; i++)
	{
		SLPushBack(&s1, i);
	}
	printf("ɾ���±�Ϊ3��Ԫ��:>\n");
	SLPrint(&s1);//1 2 3 4 5 6
	SLErase(&s1, 3);
	SLPrint(&s1);//1 2 3 5 6

	SLDestroyed(&s1);
}




//�����������±����
void TestSL4()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 5; i++)
	{
		SLPushBack(&s1, i);
	}
	printf("���±�3��λ�ò���0:>\n");
	SLPrint(&s1);//1 2 3 4 5
	SLInsert(&s1, 3, 0);
	SLPrint(&s1);// 1 2 3 0 5

	SLDestroyed(&s1);
}



//����ͷɾ�����ö��ԣ����Ѿ��ǿյ�˳���������ɾ���ͱ���
void TestSL3()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 5; i++)
	{
		SLPushBack(&s1, i);
	}
	puts("����ͷɾ:>");
	SLPrint(&s1);
	for (int i = 1; i < 5; i++)
	{
		Sleep(1000);
		SLPopFront(&s1);
		SLPrint(&s1);
	}

	SLDestroyed(&s1);
}

//����βɾ�����ö��ԣ����Ѿ��ǿյ�˳���������ɾ���ͱ���
void TestSL2()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 5; i++)
	{
		SLPushBack(&s1, i);
	}
	puts("����βɾ:>");
	SLPrint(&s1);
	for (int i = 1; i < 5; i++)
	{
		Sleep(1000);
		SLPopBack(&s1);
		SLPrint(&s1);
	}

	SLDestroyed(&s1);
}

//����β���ͷ��
void TestSL1()
{
	SL s1;
	SLInit(&s1);
	puts("����β���ͷ��:>");
	for (int i = 0; i <= 4; i++)
	{
		SLPushBack(&s1, i);
		Sleep(1000);
		SLPrint(&s1);	
	}
	for (int i = 5; i <= 9; i++)
	{
		SLPushFront(&s1, i);
		Sleep(1000);
		SLPrint(&s1);
	}

	SLDestroyed(&s1);
}


int main()
{
	TestSL1();

	TestSL2();

	TestSL3();

	TestSL4();

	TestSL5();

	return 0;
}

