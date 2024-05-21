//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "SList.h"
//
//
//
//
////测试单链表销毁
//void PTest10()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	SLTPushBack(&plist, 5);
//	SLTPushBack(&plist, 6);
//	SLTPushBack(&plist, 7);
//	puts("测试单链表销毁");
//	SLTPrint(plist);
//
//	SLTDestroy(&plist);
//	SLTPrint(plist);
//}
//
//// 删除pos位置的结点
//void PTest9()
//{
//	SLNode* plist = NULL;
//
//	////Assertion failed: *pphead, file F:\bite\DataStructure\SList\Practice.c, line 157
//	//SLTErase(&plist, SListFind(plist, 6));
//	//SLTPrint(plist);
//
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	SLTPushBack(&plist, 5);
//	SLTPushBack(&plist, 6);
//	puts("测试单链表删除pos位置的结点");
//	SLTPrint(plist);
//
//	SLTErase(&plist, SListFind(plist, 2));
//	SLTPrint(plist);
//
//	SLTErase(&plist, SListFind(plist, 4));
//	SLTPrint(plist);
//
//	SLTErase(&plist, SListFind(plist, 1));
//	SLTPrint(plist);
//
//	SLTErase(&plist, SListFind(plist, 6));
//	SLTPrint(plist);
//
//	////Assertion failed: pos, file F:\bite\DataStructure\SList\Practice.c, line 158
//	//SLTErase(&plist, SListFind(plist, 9));
//	//SLTPrint(plist);
//
//}
//
//
//
////测试单链表在pos的前面插入x
//void PTest8()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	puts("测试单链表在pos的前面插入x");
//	SLTPrint(plist);
//
//	SLTInsert(&plist, SListFind(plist, 4), 40);
//	SLTPrint(plist);//在4所在位置的前面插入40
//
//	SLTInsert(&plist, SListFind(plist, 3), 30);
//	SLTPrint(plist);//在3所在位置的前面插入30
//
//	SLTInsert(&plist, SListFind(plist, 2), 20);
//	SLTPrint(plist);//在2所在位置的前面插入20
//
//	SLTInsert(&plist, SListFind(plist, 1), 10);
//	SLTPrint(plist);//在1所在位置的前面插入10
//
//	//Assertion failed: pos, file F:\bite\DataStructure\SList\Practice.c, line 135
//	//SLTInsert(&plist, SListFind(plist, 5), 50);
//	//SLTPrint(plist);//在5所在位置的前面插入50,断言报错
//
//}
//
//
//
//
////测试单链表查找一个数的返回值作为pos位置，删除pos位置之后的值
//void PTest7()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	puts("测试单链表查找一个数的返回值作为pos位置，删除pos位置之后的值");
//	SLTPrint(plist);
//
//	SListEraseAfter(SListFind(plist, 1));
//	SLTPrint(plist);
//
//	SListEraseAfter(SListFind(plist, 3));
//	SLTPrint(plist);
//
//	//SListEraseAfter(NULL);
//}
//
////测试单链表查找一个数的返回值作为pos位置，在这个位置之后插入x
//void PTest6()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	SLTPushBack(&plist, 5);
//	SLTPushBack(&plist, 6);
//	puts("测试单链表查找一个数的返回值作为pos位置，在这个位置之后插入x");
//	SLTPrint(plist);
//
//	SListInsertAfter(SListFind(plist, 5), 25);
//	SLTPrint(plist);
//
//	SListInsertAfter(SListFind(plist, 4), 16);
//	SLTPrint(plist);
//}
//
////测试单链表头删
//void PTest5()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	puts("测试单链表头删");
//	SLTPrint(plist);
//
//	SLTPopFront(&plist);
//	SLTPrint(plist);
//
//	SLTPopFront(&plist);
//	SLTPrint(plist);
//
//	SLTPopFront(&plist);
//	SLTPrint(plist);
//
//	// 此时 *pphead = NULL, 再进行头删就报错，引发断言
//	/*SLTPopFront(&plist);
//	SLTPrint(plist);*/
//}
//
////测试单链表尾删
//void PTest4()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	puts("测试单链表尾删");
//	SLTPrint(plist);
//
//	SLTPopBack(&plist);
//	SLTPrint(plist);
//
//	SLTPopBack(&plist);
//	SLTPrint(plist);
//
//	SLTPopBack(&plist);
//	SLTPrint(plist);
//
//	//此时*pphead=NULL,再进行尾删就报错，引发断言
//	/*SLTPopBack(&plist);
//	SLTPrint(plist);*/
//}
//
////测试单链表头插
//static void PTest3()
//{
//	SLNode* plist = NULL;
//	SLTPushFront(&plist, 1);
//	SLTPushFront(&plist, 2);
//	SLTPushFront(&plist, 3);
//	SLTPushFront(&plist, 4);
//	SLTPushFront(&plist, 5);
//	puts("测试单链表头插");
//	SLTPrint(plist);
//}
//
//////测试单链表尾插
//static void PTest2()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	SLTPushBack(&plist, 5);
//	puts("测试单链表尾插");
//	SLTPrint(plist);
//}
//
////测试创建新的结点和打印
//static void PTest1()
//{
//	SLNode* plist1 = CreateNode(1);
//	SLNode* plist2 = CreateNode(2);
//	puts("测试创建新的结点和打印");
//	SLTPrint(plist1);
//	SLTPrint(plist2);
//}
//
//
//int main()
//{
//	PTest1();
//
//	PTest2();
//
//	PTest3();
//
//	PTest4();
//
//	PTest5();
//
//	PTest6();
//
//	PTest7();
//
//	PTest8();
//
//	PTest9();
//
//	PTest10();
//
//	return 0;
//}