#define _CRT_SECURE_NO_WARNINGS 1

//2种申请内存的方式

//int main()
//{
//	int a = 10;//存放一个值
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//存放一组数
//
//	return 0;
//}

//C语言给程序员一种权利：能够动态申请和管理内存空间


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//
//int main()
//{
//	//申请一块空间，用来存放10个整型
//	//int* p = (int*)malloc(INT_MAX*4);
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//free
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//calloc 也是用来申请内存空间

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//空间不够，希望调整空间为20个整型的空间
//	int* ptr = (int*)realloc(p, 2000*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//...
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//

//int main()
//{
//	int*p = (int*)realloc(NULL, 40);//== malloc(40);
//	if (p == NULL)
//	{
//
//	}
//	return 0;
//}

//对NULL指针的解引用操作
//int main()
//{
//	int *p = (int*)malloc(40);
//	//不做返回值判断，就可能使用NULL指针，解引用
//	if (p == NULL)
//	{
//
//	}
//	*p = 20;
//
//	return 0;
//}

// 对动态开辟空间的越界访问
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int i = 0;
//	//越界了
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	//打印
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对非动态开辟内存使用free释放

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//使用free释放一块动态开辟内存的一部分

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//0 1 2 3 4 0 0 0 0 0 
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对同一块动态内存多次释放

//int main()
//{
//	int* p = malloc(40);
//	if (p == NULL)
//	{
//		//....
//		return 1;
//	}
//	//....
//	
//	//释放
//	free(p);
//	p = NULL;
//	//...
//
//	free(p);
//
//	return 0;
//}

//动态开辟内存忘记释放（内存泄漏）

//void test()
//{
//	int* p = (int*)malloc(40);
//	//...
//	if (3)
//		return;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//...
//	while (1)
//	{
//		;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int* p = (int*)malloc(40);
//	//...
//	if (3)
//		return p;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	int* ret = test();
//	free(ret);
//	ret = NULL;
//	//...
//	while (1)
//	{
//		;
//	}
//
//	return 0;
//}

