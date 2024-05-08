#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	const char* p = "abcdef";
//	printf("%s\n", p);
//	printf("%c\n", *p);
//
//	//*p = 'e';
//
//	         //[abcdef\0]
//	         //char arr[] = "abcdef";
//
//	//printf("%c\n", "abcdef"[3]);
//
//	return 0;
//}

//
//<剑指offer> - 必刷
//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	if (&str3 == &str4)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//
//	//不会这样使用的
//	int* arr[] = { &a, &b, &c, &d };
//
//	return 0;
//}

//可以使用指针数组模拟一个二维数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	        //int*  int*  int*
//	//整型指针数组
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	//字符指针数组
//	char* arr[5] = {"hello bit", "hehe", "penggeC", "bitejiuyeke", "C++"};
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}

//数组名的理解
//数组名是数组首元素的地址
//但是存在2个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，取出的是数组的地址
//

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr+1);
//
//	//指针类型决定了指针+1，到底+几个字节
//
//	return 0;
//}


//int main()
//{
//	//int * p;
//	int arr[10] = { 0 };
//
//	//int [10]
//	//int * p;
//	//int [10] * p;
//
//	int (*p)[10] = &arr; //p是用来存放数组的地址的，p就是数组指针
//	
//	char* arr2[5];
//	char* (*pc)[5] = &arr2;
//
//	int arr3[] = { 1,2,3 };
//	int (*p3)[3] = &arr3;
//
//	return 0;
//}

//
//数组指针到底有什么用呢？
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	/*
//	int (*p)[10] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	*/
//
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//
//
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//
//	return 0;
//}


//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]===>*(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//&函数名就是函数的地址
//	//函数名也是函数的地址
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//int (*pf1)(int, int) = Add;//pf1就是函数指针变量
//
//	//int (* pf2)(int, int) = &Add;
//	//int ret = (* pf2)(2, 3);
//
//	//int (* pf2)(int, int) = Add;
//	//int ret = pf2(2, 3);
//	//int ret = pf2(2, 3);
//
//	//int ret = Add(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//0x0012ff40
//0x0045ff80
//
//int main()
//{
//	//void (*)() 函数指针类型
//	//int a = (int)3.14
//	//下面的代码是在调用0地址处的函数，这个函数没有参数，返回类型是void
//	//( *(void (*)()) 0 )();
//	//int *p = (int*)0x0012ff40;
//
//	//void (* signal(int , void(*)(int) ) ) (int);
//
//	////void (*)(int) signal(int, void(*)(int));
//	//typedef void (*pfun_t)(int);
//	//pfun_t signal(int, pfun_t);
//
//	return 0;
//}
//
//typedef  unsigned int uint;
//int main()
//{
//	uint a;
//	unsigned int b;
//
//	return 0;
//}
//














