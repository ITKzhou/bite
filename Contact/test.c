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

//定义一个枚举类型，存放按键选项
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
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();

		printf("请选择:>>");
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
			//通讯录的信息保存到文件中
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录.\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}

	} while (input);

	return 0;
}