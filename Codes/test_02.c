#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


////猜数字游戏
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
//	//1.生成随机数0~100
//	int r = rand() % 100 + 1;
//	int guass = 0;
//	int count = 9;
//	//2.猜数字
//	while (count)
//	{
//		printf("请猜数字：\n");
//		scanf("%d", &guass);
//		if (guass > r)
//			printf("猜大了\n");
//		else if (guass < r)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		count--;
//		printf("还剩%d次机会!!!\n", count);
//	}
//	if (count == 0)
//	{
//		printf("所有机会已用完，正确答案是：%d\n", r);
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	//设置随机数的种子值
//	srand((unsigned int)time(NULL));
//	do
//	{
//		//打印菜单
//		menu();
//
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//游戏的逻辑
//			game();
//			break;
//		case 0:
//			printf("退出游戏。\n");
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


