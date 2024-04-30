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



//水仙花数是指一个 3 位数，它的每个位上的数字的
// 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153

//#include <math.h>
//
//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int n = 1;//一个数至少有一位
//		int m = i;//保留i值，后面作比较
//		int sum = 0;
//		//1.得到i的几位数n
//		while (m /= 10)
//		{
//			n++;
//		}
//		m = i;
//		//2.计算每位的n次方，求和
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		//3.和与i比较
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}	
//	}
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


//#include <math.h>

//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入a和n：\n");
//	scanf("%d %d", &a,&n);
//	
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			sum += a * pow(10, i);
//		}
//	}
//	printf("%d的前%d和Sn=%d\n", a, n, sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入a和n：\n");
//	scanf("%d %d", &a, &n);
//	
//	int temp = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		temp += a * pow(10, i);
//		sum += temp;
//	}
//	printf("%d的前%d和Sn=%d\n", a, n, sum);
//	return 0;
//}


