#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"




void menu()
{
	printf("*********************************\n");
	printf("**** 1. add        2. del    ****\n");
	printf("**** 3. search     4. modify ****\n");
	printf("**** 5. show       6. sort   ****\n");
	printf("**** 0. exit                 ****\n");
	printf("********************************\n");
}

//����һ��ö�����ͣ���Ű���ѡ��
enum button
{
	EXIT,//0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();

		printf("��ѡ��:>>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//ͨѶ¼����Ϣ���浽�ļ���
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�ͨѶ¼.\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}

	} while (input);

	return 0;
}