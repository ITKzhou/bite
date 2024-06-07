#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>


/// @Problem   :   malloc     calloc     realloc   free
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：正确使用
/// 0. void* malloc (size_t size);
/// 1. void* calloc (size_t num, size_t size);
/// 2. void* realloc (void* ptr, size_t size);对动态申请的内存空间进行扩容
/// 3. void free (void* ptr);只能对动态开辟的空间使用，不可对非动态开辟内存使用

/// 二：异常陷阱
/// 0. 动态开辟空间，必须对NULL指针判断
/// 1. 不可越界访问
/// 2. 不可对非动态开辟内存使用free()
/// 3. 不可使用free()释放部分动态内存空间
/// 4. 不可对同一块动态内存多次释放

/// @Codeing    :  
///**********************************Start*************************************          

//#include <stdlib.h>
//#include <assert.h>
//
//enum LOC_MAX
//{
//	MAL=10,
//	CAL=20,
//	REAL=20
//};
//
//void test_loc()
//{
//	int* pm = (int*)malloc(MAL * sizeof(int));
//	int* pc = (int*)calloc(CAL, sizeof(int));
//
//	if (pm == NULL || pc == NULL)
//	{
//		perror("malloc,calloc");
//		return;
//	}
//	int i = 0;
//	//初始化malloc
//	for (i = 0; i < MAL; i++)
//	{
//		pm[i] = i + 1;
//	}
//	for (i = 0; i < MAL; i++)//打印malloc申请的空间
//	{
//		printf("%d ", pm[i]);
//		if (i == MAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	//calloc自动初始化，打印calloc申请的空间
//	for (i = 0; i < CAL; i++)
//	{
//		printf("%d ", pc[i]);
//		if (i == CAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	//对malloc申请的空间pm扩容
//	int* pr = (int*)realloc(pm, REAL * sizeof(int));
//	//assert(pr);
//
//	if (pr == NULL)//最好判断是否为空，调用断言
//	{
//		perror("realloc");
//		return;
//	}
//	else
//	{
//		pm = pr;
//	}
//	for (i = 0; i < REAL; i++)
//	{
//		printf("%d ", pm[i]);
//		if (i == REAL - 1)
//		{
//			printf("\n");
//		}
//	}
//
//	free(pm);
//	free(pc);
//	pm = NULL;
//	pc = NULL;
//}
//
//int main()
//{
//	test_loc();
//	return;
//}

///**********************************End***************************************





/// @Problem   :     返回栈空间地址的问题    
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：
/// 0. 野指针，返回的地址指向了不属于自己的内存空间，非法访问
/// 1. 局部变量的指针不能做返回值，因为函数内的空间在函数返回后就会释放掉

/// 二：返回栈空间变量的问题
/// 0. 销毁的局部变量不影响，直接返回的变量的值
/// 1. 

/// @Codeing    : 若无返回值，非空指针传参，形参就是相应指针类型；若空指针传参，形参就是二级指针。 
///**********************************Start*************************************          


//函数无返回值

//void GetMemory(char** p)//形参二级指针
//{
//	*p = (char*)malloc(100);////使str指向动态申请的内存空间，*p解引用就是str的值
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//传str的地址
//	strcpy(str, "hello world");
//	printf(str);//从起始地址开始打印，直到'\0'
//
//	free(str);//释放内存
//	str = NULL;
//}

//函数有返回值

//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//本质是使str指向动态申请的内存空间
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

///**********************************End***************************************





/// @Problem   :       内存空间 划分区域 
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：
/// 0.内核空间(用户代码不能读写)
/// 1.栈(向下增长)
/// 2.内存映射段(文件映射、动态库、匿名映射)
/// 3.堆(向上增长)
/// 4.数据段(全局数据、静态数据)
/// 5.代码段(可执行代码 / 只读常量)

/// @Codeing    :  
///**********************************Start*************************************          

///**********************************End***************************************





/// @Problem   :       结构体中的 柔性数组 与 指针变量 在使用动态申请内存时的差异
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：特点：
/// 0.结构中的柔性数组成员前面必须至少一个其他成员
/// 1.sizeof 返回的这种结构大小不包括柔性数组的内存
/// 2.包含柔性数组成员的结构用malloc()函数进行内存的动态分配
/// 3.并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

/// 二：优点：
/// 0. 方便内存释放
/// 1. 连续内存提高访问速度，减少内存碎片

/// @Codeing    :  
///**********************************Start*************************************          

//typedef struct S1
//{
//	char c;
//	int i;
//	int arr[];
//}S1;
//
//typedef struct S2
//{
//	char c;
//	int i;
//	int* data;
//}S2;
//
////测试柔性数组
//
//void test_flexible_arr()
//{
//	//开辟空间，sizeof(S1)不计算柔性数组的大小在内
//	S1* ps1 = (S1*)malloc(sizeof(S1) + 20);
//	if (ps1 == NULL)
//	{
//		perror("malloc1");
//		return;
//	}
//	ps1->c = 'z';
//	ps1->i = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps1->arr[i] = i;
//	}
//	//打印
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps1->arr[i]);
//	}
//	printf("\n");
//	//内存不够，需扩容
//	S1* ptr = (S1*)realloc(ps1, sizeof(S1) + 40);
//	if (ptr != NULL)
//	{
//		ps1 = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps1->arr[i]);
//	}
//	printf("\n");
//	free(ps1);
//	ps1 = NULL;
//}
//
////测试指针变量
//
//void test_pointer_var()
//{
//	S2* ps2 = (S2*)malloc(sizeof(S2));
//	if (ps2 == NULL)
//	{
//		perror("malloc1");
//		return;
//	}
//	ps2->c = 'y';
//	ps2->i = 50;
//	ps2->data = (int*)malloc(20);//为data指针开辟20字节
//	if (ps2->data == NULL)
//	{
//		perror("malloc2");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps2->data[i] = i + 1;
//	}
//	//打印
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps2->data[i]);
//	}
//	printf("\n");
//	//内存不够，需扩容
//	int* pr = (int*)realloc(ps2->data, 40);
//	if (pr != NULL)
//	{
//		ps2->data = pr;
//	}
//	else
//	{
//		perror("realloc");
//		return;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps2->data[i]);
//	}
//
//	free(ps2->data);
//	ps2->data = NULL;
//	free(ps2);
//	ps2 = NULL;
//}
//
//
//int main()
//{
//	
//	test_flexible_arr();
//
//	test_pointer_var();
//
//	return 0;
//}

///**********************************End***************************************


////用malloc模拟实现一个二维数组
//int main()
//{
//	int rows = 3;
//	int cols = 5;
//
//	//开辟数组空间
//	int* data = (int*)malloc(rows * cols * sizeof(int));
//	if (data == NULL) {
//		perror("malloc fail");
//		free(data);
//		exit(-1);
//	}
//	//初始化数据
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < cols; j++) {
//			data[i * cols + j] = i * cols + j;
//		}
//	}
//
//	//打印二维数组
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			printf("%-3d", data[i * cols + j]);
//		}
//		printf("\n");
//	}
//
//	free(data);
//	data = NULL;
//
//	return 0;
//}


////使用联合体的知识，写一个函数判断当前机器是大端还是小端，如果是小端返回1，如果是大端返回0.
//
//int isLittle()
//{
//	union MyUnion
//	{
//		unsigned int n;
//		unsigned char ch[4];
//	}test;
//	test.n = 0x01020304;
//	return test.ch[0] == 1 ? 0 : 1;
//}
//
//int main()
//{
//	printf("%d\n", isLittle());
//	return 0;
//}
