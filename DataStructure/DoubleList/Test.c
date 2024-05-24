#define _CRT_SECURE_NO_WARNINGS 1

#include "DoubleList.h"


//测试链表销毁
void Test7() {
	LTNode* plist = NULL;
	plist = LTInit();

	ListPushBack(plist, 1);
	ListPrint(plist);

	ListDestory(plist);
	plist = NULL;

	
}

//删除pos位置的结点
void Test6() {
	LTNode* plist = NULL;
	plist = LTInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

	ListErase(ListFind(plist,2));
	ListPrint(plist);

	ListErase(ListFind(plist, 4));
	ListPrint(plist);

	//触发断言
	//ListErase(ListFind(plist, 9));
	//ListPrint(plist);

}


//测试在pos位置之前插入x
void Test5() {
	LTNode* plist = NULL;
	plist = LTInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

	ListInsert(ListFind(plist, 3), 30);
	ListPrint(plist);

	//在NULL位置之前插入，触发断言，报错
	//ListInsert(ListFind(plist, 6), 30);
	//ListPrint(plist);

}

//测试头删
static void Test4() {
	LTNode* plist = NULL;
	plist = LTInit();

	//头删空链表，触发断言，报错
	//ListPopFront(plist);
	//ListPrint(plist);

	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);
	ListPrint(plist);

	ListPopFront(plist);
	ListPrint(plist);

	ListPopFront(plist);
	ListPrint(plist);

}


//测试头插
void Test3() {
	LTNode* plist = NULL;
	plist = LTInit();

	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);

	ListPrint(plist);
}

//测试尾删
void Test2() {
	LTNode* plist = NULL;
	plist = LTInit();

	//空链表，还进行尾删，触发断言报错
	//ListPopBack(plist);

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);	
	
	ListPopBack(plist);
	ListPrint(plist);
}

//测试初始化、打印、尾插
void Test1() {
	LTNode* plist = NULL;
	plist = LTInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);

	ListPrint(plist);
	
}

int main()
{
	Test1();

	//Test2();

	//Test3();

	//Test4();

	//Test5();

	//Test6();

	//Test7();

	return 0;
}
