#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//3个数比较大小，并输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	printf("请输入3个数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	if (a < c)
//	{
//		t = c;
//		c = a;
//		a = t;
//	}
//	if (b < c)
//	{
//		t = c;
//		c = b;
//		b = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




////求10 个整数中最大值
//
//#define N 10
//
//int main()
//{
//	int max = 0;
//	int arr[N] = { 0 };
//	printf("请输入10个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{	
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("MAX=%d\n", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	double sum = 0.0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////打印1000年到2000年之间的闰年
//#define N 1000
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = N; i < 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			count++;
//			printf("%d ", i);	
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d %d", &a, &b);
//	int m = a;
//	int n = b;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d和%d的最大公约数是：%d\n", m, n, b);
//	printf("%d和%d的最小公倍数是：%d\n", m, n, m*n/b);
//	return 0;
//}


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


