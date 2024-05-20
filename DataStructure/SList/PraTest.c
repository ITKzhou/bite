#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"











//测试单链表查找
void PTest6()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 6);
	SLTPrint(plist);

	SLNode* ret = SListFind(plist, 5);
	SLTPrint(ret);



}

//测试单链表头删
void PTest5()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
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

	SLTPrint(plist);
}


////测试单链表尾插
static void PTest2()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);


	SLTPrint(plist);
}



//测试打印和创建新的结点
static void PTest1()
{
	SLNode* plist = NULL;
	SLTPrint(plist);


	SLNode* plist1 = CreateNode(1);
	SLTPrint(plist1);

}


int main()
{
	//PTest1();//测试打印和创建新的结点

	//PTest2();//测试单链表尾插

	//PTest3();//测试单链表头插

	//PTest4();//测试单链表尾删

	//PTest5();//测试单链表头删

	PTest6();//测试单链表查找
	

	return 0;
}