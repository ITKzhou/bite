#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//测试单链表查找一个数的返回值作为pos位置，删除pos位置之后的值
void PTest7()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	puts("测试单链表查找一个数的返回值作为pos位置，删除pos位置之后的值");
	SLTPrint(plist);

	SListEraseAfter(SListFind(plist, 1));
	SLTPrint(plist);

	SListEraseAfter(SListFind(plist, 3));
	SLTPrint(plist);

	//SListEraseAfter(NULL);
}

//测试单链表查找一个数的返回值作为pos位置，在这个位置之后插入x
void PTest6()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 6);
	puts("测试单链表查找一个数的返回值作为pos位置，在这个位置之后插入x");
	SLTPrint(plist);

	SListInsertAfter(SListFind(plist, 5), 25);
	SLTPrint(plist);

	SListInsertAfter(SListFind(plist, 4), 16);
	SLTPrint(plist);
}

//测试单链表头删
void PTest5()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	puts("测试单链表头删");
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	// 此时 *pphead = NULL, 再进行头删就报错，引发断言
	/*SLTPopFront(&plist);
	SLTPrint(plist);*/
}

//测试单链表尾删
void PTest4()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	puts("测试单链表尾删");
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	//此时*pphead=NULL,再进行尾删就报错，引发断言
	/*SLTPopBack(&plist);
	SLTPrint(plist);*/
}

//测试单链表头插
static void PTest3()
{
	SLNode* plist = NULL;
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	SLTPushFront(&plist, 5);
	puts("测试单链表头插");
	SLTPrint(plist);
}

////测试单链表尾插
static void PTest2()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	puts("测试单链表尾插");
	SLTPrint(plist);
}

//测试创建新的结点和打印
static void PTest1()
{
	SLNode* plist1 = CreateNode(1);
	SLNode* plist2 = CreateNode(2);
	puts("测试创建新的结点和打印");
	SLTPrint(plist1);
	SLTPrint(plist2);
}


int main()
{
	PTest1();

	PTest2();

	PTest3();

	PTest4();

	PTest5();

	PTest6();
	
	PTest7();

	return 0;
}