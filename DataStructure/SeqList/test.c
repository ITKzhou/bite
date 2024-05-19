#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//测试在任意下标删除
void TestSL5()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 6; i++)
	{
		SLPushBack(&s1, i);
	}
	printf("删除下标为3的元素:>\n");
	SLPrint(&s1);//1 2 3 4 5 6
	SLErase(&s1, 3);
	SLPrint(&s1);//1 2 3 5 6

	SLDestroyed(&s1);
}




//测试在任意下标插入
void TestSL4()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 5; i++)
	{
		SLPushBack(&s1, i);
	}
	printf("在下标3的位置插入0:>\n");
	SLPrint(&s1);//1 2 3 4 5
	SLInsert(&s1, 3, 0);
	SLPrint(&s1);// 1 2 3 0 5

	SLDestroyed(&s1);
}



//测试头删，设置断言，若已经是空的顺序表，还进行删除就报错
void TestSL3()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 5; i++)
	{
		SLPushBack(&s1, i);
	}
	puts("测试头删:>");
	SLPrint(&s1);
	for (int i = 1; i < 5; i++)
	{
		Sleep(1000);
		SLPopFront(&s1);
		SLPrint(&s1);
	}

	SLDestroyed(&s1);
}

//测试尾删，设置断言，若已经是空的顺序表，还进行删除就报错
void TestSL2()
{
	SL s1;
	SLInit(&s1);
	for (int i = 1; i <= 5; i++)
	{
		SLPushBack(&s1, i);
	}
	puts("测试尾删:>");
	SLPrint(&s1);
	for (int i = 1; i < 5; i++)
	{
		Sleep(1000);
		SLPopBack(&s1);
		SLPrint(&s1);
	}

	SLDestroyed(&s1);
}

//测试尾插和头插
void TestSL1()
{
	SL s1;
	SLInit(&s1);
	puts("测试尾插和头插:>");
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

