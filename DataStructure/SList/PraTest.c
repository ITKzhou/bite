#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//���Ե��������һ�����ķ���ֵ��Ϊposλ�ã�ɾ��posλ��֮���ֵ
void PTest7()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	puts("���Ե��������һ�����ķ���ֵ��Ϊposλ�ã�ɾ��posλ��֮���ֵ");
	SLTPrint(plist);

	SListEraseAfter(SListFind(plist, 1));
	SLTPrint(plist);

	SListEraseAfter(SListFind(plist, 3));
	SLTPrint(plist);

	//SListEraseAfter(NULL);
}

//���Ե��������һ�����ķ���ֵ��Ϊposλ�ã������λ��֮�����x
void PTest6()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 6);
	puts("���Ե��������һ�����ķ���ֵ��Ϊposλ�ã������λ��֮�����x");
	SLTPrint(plist);

	SListInsertAfter(SListFind(plist, 5), 25);
	SLTPrint(plist);

	SListInsertAfter(SListFind(plist, 4), 16);
	SLTPrint(plist);
}

//���Ե�����ͷɾ
void PTest5()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	puts("���Ե�����ͷɾ");
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	// ��ʱ *pphead = NULL, �ٽ���ͷɾ�ͱ�����������
	/*SLTPopFront(&plist);
	SLTPrint(plist);*/
}

//���Ե�����βɾ
void PTest4()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	puts("���Ե�����βɾ");
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	//��ʱ*pphead=NULL,�ٽ���βɾ�ͱ�����������
	/*SLTPopBack(&plist);
	SLTPrint(plist);*/
}

//���Ե�����ͷ��
static void PTest3()
{
	SLNode* plist = NULL;
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	SLTPushFront(&plist, 5);
	puts("���Ե�����ͷ��");
	SLTPrint(plist);
}

////���Ե�����β��
static void PTest2()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	puts("���Ե�����β��");
	SLTPrint(plist);
}

//���Դ����µĽ��ʹ�ӡ
static void PTest1()
{
	SLNode* plist1 = CreateNode(1);
	SLNode* plist2 = CreateNode(2);
	puts("���Դ����µĽ��ʹ�ӡ");
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