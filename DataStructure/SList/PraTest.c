#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"











//���Ե��������
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

//���Ե�����ͷɾ
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

	SLTPrint(plist);
}


////���Ե�����β��
static void PTest2()
{
	SLNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);


	SLTPrint(plist);
}



//���Դ�ӡ�ʹ����µĽ��
static void PTest1()
{
	SLNode* plist = NULL;
	SLTPrint(plist);


	SLNode* plist1 = CreateNode(1);
	SLTPrint(plist1);

}


int main()
{
	//PTest1();//���Դ�ӡ�ʹ����µĽ��

	//PTest2();//���Ե�����β��

	//PTest3();//���Ե�����ͷ��

	//PTest4();//���Ե�����βɾ

	//PTest5();//���Ե�����ͷɾ

	PTest6();//���Ե��������
	

	return 0;
}