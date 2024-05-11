#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/// @Problem   : 指针作为形参，那么它可以接收的类型有哪些？        
///————————————————————————————————————————————————————————————————————————————            
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


/// @Problem   : typedef对指针类型重命名        
///————————————————————————————————————————————————————————————————————————————             
/// @Solution  : 
///一：类型名的位置放在之前指针名的位置
///0. typedef int (*pf_t)(int,int);  函数指针新的类型名为pf_t
///1. 

///****************************************************************************




/// @Problem   :         指针数组：模拟二维数组
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///Start******************************************************************Start          

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

///End**********************************************************************End



/// @Problem   :   数组指针作为形参接收二维数组传参      
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：二维数组传参，传的是第一行的地址，类型是指向一维数组的指针 int (*arrp）[5]
///0. 
///1. 

///二：
///0. 
///1. 

///@Codeing    :  二维数组传参
///****************************************************************************

//void print(int(*arrp)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arrp[i][j]);
//			printf("%d ", *((*(arrp + i) + j)));
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

///****************************************************************************









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



/// @Problem   :     实现加减乘除的计算器 ————转移表    
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 


///@Codeing    :     函数指针数组
///****************************************************************************        

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

//void Print_fparr(int (*fparr[5])(int, int), int x, int y, size_t size)
//{
//	int i = 0;
//	for (i = 1; i < 5; i++)
//	{
//		int ret = fparr[i](x, y);
//		printf("%d \n", ret);
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	int (*fparr[])(int, int) = { NULL, &Add, &Sub, &Mul, &Div };
//	size_t sz = sizeof(fparr) / sizeof(fparr[0]);
//
//	printf("请输入x,y：\n");
//	scanf("%d %d", &x, &y);
//
//	Print_fparr(fparr, x, y, sz);
//
//	return 0;
//}

///@Codeing    :     回调函数机制：
///****************************************************************************         


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


///****************************************************************************







/// @Problem   :         使用qsort函数
///————————————————————————————————————————————————————————————————————————————             
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :    排序整形数据，排序结构体数据
///****************************************************************************         
#include <stdlib.h>

//qsort函数原型
//void qsort(void* base, 
//		   size_t num, 
//		   size_t size,
//		   int (*compar)(const void*, const void*)
//		  );

//排序整形数据

//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
// 
////打印
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
////排序整形数组
//
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


//排序结构体数据

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


///****************************************************************************



/// @Problem   :         模拟qsort函数
///————————————————————————————————————————————————————————————————————————————           
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  使用【冒泡排序】，实现一个排序函数bubble_sort()
///****************************************************************************          

//#include <string.h>
//
////对两个元素进行交换
//void swap(char* buf1, char* buf2, size_t size)
//{
//	size_t i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////冒泡排序函数
//void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* p1, const void* p2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//比较两个元素的大小，返回正数，前者大；返回负数，前者小。类型转换为char*，
//			//先确保base指针能加1调到下一字节，再加上一个元素的宽度，就能找到下一个元素
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				//交换两个元素，元素的每个字节都要交换
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}	
//	}
//}
//
//void Print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int cmp_int(const void* p1, const void* p2)
//{
//	//升序
//	//return *(int*)p1 - *(int*)p2;
//	
//	//降序
//	return *(int*)p2 - *(int*)p1;
//
//}
//
//void test_int_sort()
//{
//	int arr[10] = { 2,5,1,6,3,0,4,9,8,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Print_s(struct Stu* ps, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s, %d\n", (ps + i)->name, (ps + i)->age);
//	}
//	printf("\n");
//}
//
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	//return strcmp((*(struct Stu*)p1).name, (*(struct Stu*)p2).name);
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int cmp_struct_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;//->成员访问的优先级大于类型转换
//}
//
//void test_struct_sort()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",23},{"wnagwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	Print_s(s,sz);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_name);
//	Print_s(s, sz);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);
//	Print_s(s, sz);
//}
//
//int main()
//{
//	//排序整型数据
//	test_int_sort();
//
//	//排序结构体数据
//	test_struct_sort();
//
//	return 0;
//}

///****************************************************************************



/// @Problem   :     找单身狗2   
///————————————————————————————————————————————————————————————————————————————           
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :     一个数组中只有两个数字是出现一次，其他所有数字都出现了两次，
///					  编写一个函数找出这两个只出现一次的数字。
///****************************************************************************

//void Find_nums(int* arr, int sz, int* px, int* py)
//{
//	int i = 0;
//	int num = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];//标记整体异或的值
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> pos) & 1) == 1)//标记32位中从低到高位第一个为1的位置
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//该比特位为‘1’，必定是所有元素累积异或后，只出现一次的两个数字其中一个
//		{
//			(*px) ^= arr[i];
//		}
//		else//该比特位为‘0’，就必定是另外一个只出现一次的数字
//		{
//			(*py) ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int x = 0;
//	int y = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find_nums(arr, sz, &x, &y);
//	printf("%d, %d\n", x, y);
//	return 0;
//}


///****************************************************************************



/// @Problem   :  杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下
///				  是递增的，请编写程序在这样的矩阵中查找某个数字是否存在     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//int Find_num(int(*arr)[3], int k)
//{
//	int i = 0;
//	int j = 3 - 1;
//	while (i < 3 && j >= 0)
//	{
//		if (k > arr[i][j])
//		{
//			i++;
//		}
//		else if (k < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	int input = 0;
//	scanf("%d", &input);
//
//	if (Find_num(arr, input))
//	{
//		printf("能找到\n");
//	}
//	else
//	{
//		printf("不能找到\n");
//	}
//	return 0;
//}

///**********************************End***************************************




/// @Problem   :   字符串左旋:实现一个函数，可以左旋字符串中的k个字符      
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//#include <string.h>
//
//void reversal_part(char* src, int start, int end)
//{
//	int i, j, tmp;
//
//	for (i = start, j = end; i < j; i++, j--)//操作左右两个元素
//	{
//		tmp = src[j];
//		src[j] = src[i];
//		src[i] = tmp;
//	}
//}
//
//void leftRound(char* src, int k)//3
//{
//	int len = strlen(src);
//	if (k % len)
//	{
//		reversal_part(src, 0, k - 1);//旋转前面部分
//		reversal_part(src, k, len - 1);//旋转后面部分
//		reversal_part(src, 0, len - 1);//旋转整体
//	}
//}
//
//int main()
//{
//	char src[] = "ABCDE";
//	int k = 0;
//	scanf("%d", &k);
//
//	leftRound(src, k);
//	printf("%s", src);
//
//	return 0;
//}

///**********************************End***************************************



/// @Problem   :    字符串旋转结果     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
///**********************************Start*************************************          


//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}


///**********************************End***************************************



/// @Problem   :        模拟实现strlen 
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//int my_strlen_count(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen_recursion(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen_recursion(str + 1);
//}
//
//#include <assert.h>
//int my_strlen_pointSub(const char* str)
//{
//	const char* start = str;
//	assert(str);
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char str[] = { "abcdef" };
//	printf("%d\n", my_strlen_count(str));
//	printf("%d\n", my_strlen_recursion(str));
//	printf("%d\n", my_strlen_pointSub(str));
//	return 0;
//}

///**********************************End***************************************



/// @Problem   :         模拟实现strcmp
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//#include <assert.h>
//char* my_strcpy(char* des, const char* sor)
//{
//	char* ret = des;
//	assert(sor && des);
//	while (*des++ = *sor++);//当指向'\0'时，先解引用复制过来后，再问条件和自增1
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = "abcdef";
//	printf("%s\n", my_strcpy(str1, str2));
//
//	return 0;
//}

///**********************************End***************************************



