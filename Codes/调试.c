#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//vs2022x86环境下，局部变量在栈区县分配高地址，后低地址。当循环到arr[12时，
//arr[12]]的地址恰好就是i的地址，arr[12]=0，i=0，进入死循环。
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）
// 
// 
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int bottle = money;//一次性把钱花光买20瓶水
//	int empty = money;
//	while (empty > 1)//至少2个空瓶才能兑换一个
//	{
//		bottle += empty / 2;//空瓶子除以2累加到瓶子总数
//		empty = empty / 2 + empty % 2;//
//	}
//	printf("%d\n", bottle);
//	return 0;
//}

//打印菱形

//int main()
//{
//	int n = 0;
//	printf("请输入菱形上半部分的行数：\n");
//	scanf("%d", &n);//上部分的行数
//	int i = 0;//记录行数
//	int j = 0;//记录空格数
//	int k = 0;//记录星号数
//	for (i = 1; i <= n; i++)//打印上部分的n行
//	{
//		for (j = 1; j <= n - i; j++)//打印的空格数+第i行=总行数n
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i - 1; k++)//每行星号数：1,3,5,7,9....
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < n; i++)//打印下部分的n-1行
//	{
//		for (j = 1; j <= i; j++)//第i行就有i个空格
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * n - 1- 2 * i; k++)
//		{
//			//菱形水平对角线长度：2*n-1
//			//第i行就减少水平对角线长度的2*i个
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//打印水仙花数



