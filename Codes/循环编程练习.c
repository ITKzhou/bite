#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

////判断三角形
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if (a == b && b == c && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}


//在屏幕上输出9*9乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////100~200的素数

//#define N 100
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = N; i <= 200; i++)
//	{
//		int flag = 1;//假设这个数是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//输入一个字符，用它构造一个边长为5的三角形圣诞树。
//数据范围：保证输入的字符是一个 char 类型的值

//int main()
//{
//    char a;
//    scanf("%c", &a);//输入一个任意字符
//    int i = 1;//记行数用的
//    int j, g; //j是输出“空格”用的，g是输出“字符+空格”用的
//    for (i = 1; i < 6; i++)//关于行数i在前5行执行的循环（包括第5行）
//    {
//        for (j = 5 - i; j > 0; j--)//输出第n行的前5-n个空格（n<=5）
//        {
//            printf("*");
//        }
//        for (g = 0; g < i; g++)//输出第n行的所有空格后的字符
//        {
//            printf("%c ", a);//注意所输出的%c后有一个空格
//        }
//        printf("\n");//第n行输出结束，执行换行操作
//    }//运行到这里就输出了n行的字符金字塔图形
//    return 0;
//}

//两数交换位置并输出
//int main() {
//    int a, b, t;
//    scanf("%d,%d", &a, &b);
//    t = a;
//    a = b;
//    b = t;
//    printf("a=%d,b=%d\n", a, b);
//
//    return 0;
//}


////strlen()求字符串长度，包括空白键
//int main()
//{
//	char str[] = { "hello  bite!" };
//	int r = strlen(str);
//	printf("%d\n", r);
//	return 0;
//}



