#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


////��������Ϸ
//
//
//void menu()
//{
//	printf("********************\n");
//	printf("******1. play ******\n");
//	printf("******0. exit ******\n");
//	printf("********************\n");
//}
//
//
//void game()
//{
//	//1.���������0~100
//	int r = rand() % 100 + 1;
//	int guass = 0;
//	int count = 9;
//	//2.������
//	while (count)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guass);
//		if (guass > r)
//			printf("�´���\n");
//		else if (guass < r)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		count--;
//		printf("��ʣ%d�λ���!!!\n", count);
//	}
//	if (count == 0)
//	{
//		printf("���л��������꣬��ȷ���ǣ�%d\n", r);
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	//���������������ֵ
//	srand((unsigned int)time(NULL));
//	do
//	{
//		//��ӡ�˵�
//		menu();
//
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//��Ϸ���߼�
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("����������������룺\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


