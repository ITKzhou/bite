#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/// @Problem   : 指针作为形参，那么它可以接收的类型有哪些？        
///****************************************************************************            
/// @Solution  : 
///一：一维数组传参，形参的类型
///0. 数组：一维数组，指针数组
///1. 指针：一级指针，二级指针

///二：二维数组传参，形参的类型
///0. 二维数组（列不可省略）
///1. 数组指针（列不可省略）

///三：一级指针作为形参，可接收的类型
///0. 一维数组名
///1. 整型变量取地址
///2. 整型指针

///四：二级指针作为形参，可接收的类型
/// 0. 一维数组名
/// 1. 一级指针取地址
/// 2. 二级指针
///****************************************************************************












//指针数组：模拟二维数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	        //int*  int*  int*
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *((*arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针：二维数组传参时作为形参

//void print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", p[i][j]);
//			printf("%d ", *((*(p + i) + j)));
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


//函数指针：《C陷阱和缺陷》

//int main()
//{
//  //( *(void (*)()) 0 )();
//	//下面的代码是在调用0地址处的函数，这个函数没有参数，返回类型是void
//	
//	//void (* signal(int , void(*)(int) ) ) (int);
// 
//	// typedef :对类型重命名
//	//typedef void (*pfun_t)(int);
//
//	return 0;
//}


//函数指针数组：实现加减乘除的计算器 ————转移表

//0.普通实现

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*******************************\n");
	printf("******** 1.Add    2.Sub *******\n");
	printf("******** 3.Mul    4.Div *******\n");
	printf("******** 0.Exit         *******\n");
	printf("*******************************\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器。\n");
//			break;
//		default:
//			printf("输入错误，重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//1.函数指针数组实现

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//定义函数指针数组pfar
//	int (* pfarr[])(int, int) = { NULL, &Add, &Sub, &Mul, &Div };
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);//调用函数指针数组pfar
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入x,y：\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器。\n");
//			break;
//		default:
//			printf("输入错误，重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//2.回调函数实现


//void calr(int (*pf)(int ,int))//函数指针作为形参
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入x,y：\n");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calr(Add);
//			break;
//		case 2:
//			calr(Sub);
//			break;
//		case 3:
//			calr(Mul);
//			break;
//		case 4:
//			calr(Div);
//			break;
//		case 0:
//			printf("退出计算器。\n");
//			break;
//		default:
//			printf("输入错误，重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#include <stdlib.h>
//qsort函数

//void qsort(void* base, 
//		   size_t num, 
//		   size_t size,
//		   int (*compar)(const void*, const void*)
//		  );


//int cmp_int(const void* p1, const void* p2)//自定义两个元素比较的方式
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
// 排序整形数组
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int num = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
//	int size = sizeof(arr[0]);//每一个元素的大小
//	Print(arr, num);
//	qsort(arr, num, size, cmp_int);
//	Print(arr, num);
//
//	return 0;
//}

//排序结构体

//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Print(struct Stu* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s, %d", arr[i].name, arr[i].age);
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int cmp_Stu_name(const void* p1, const void* p2)
//{
//	//return strcmp((const char*)p1, (const char*)p2);//强制类型转换为比较对象的相应类型
//	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name);
//}
//
//int main()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 18}, {"wangwu", 26} };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	Print(arr, num);
//	qsort(arr, num, size, cmp_Stu_name);
//	Print(arr, num);
//	return 0;
//}







