#define _CRT_SECURE_NO_WARNINGS 1

#include "DoubleList.h"


//������������
void Test7() {
	LTNode* plist = NULL;
	plist = LTInit();

	ListPushBack(plist, 1);
	ListPrint(plist);

	ListDestory(plist);
	plist = NULL;

	
}

//ɾ��posλ�õĽ��
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

	//��������
	//ListErase(ListFind(plist, 9));
	//ListPrint(plist);

}


//������posλ��֮ǰ����x
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

	//��NULLλ��֮ǰ���룬�������ԣ�����
	//ListInsert(ListFind(plist, 6), 30);
	//ListPrint(plist);

}

//����ͷɾ
static void Test4() {
	LTNode* plist = NULL;
	plist = LTInit();

	//ͷɾ�������������ԣ�����
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


//����ͷ��
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

//����βɾ
void Test2() {
	LTNode* plist = NULL;
	plist = LTInit();

	//������������βɾ���������Ա���
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

//���Գ�ʼ������ӡ��β��
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
