#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//计算某年某月有多少天？

//#include <stdbool.h>
//
////声明函数
//int get_days(int, int);
//bool is_leap_year(int);
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	printf("%d", get_days(year,month));
//	return 0;
//}
//
////得到天数
//int get_days(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//判断是闰年
//	if (is_leap_year(y) && m == 2)
//	{
//		return ++days[m];
//	}
//	else
//		return days[m];
//}
////判断是闰年函数
//bool is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}

//写一个二分查找函数
//在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.

//int bin_search(int[], int, int, int);
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;//设置key值
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("请输入你要查找的值：\n");
//	scanf("%d", &key);
//	printf("%d", bin_search(arr, left, right, key));
//	return 0;
//}
//
//int bin_search(int arr[], int left, int right, int key) {
//	
//	int flag = 0;//假设进入循环后标记不能找到，找到就置1
//
//	//二分查找
//	//0.能找到
//	while (left <= right)
//	{
//		//计算中间下标
//		int mid = left + (right - left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;//找到置1
//			return mid;
//		}
//	}
//	//1.不能找到
//	if (!flag)
//	{
//		return -1;
//	}
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void print_mult_table(int n);
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_mult_table(num);
//	return 0;
//}
//
//void print_mult_table(int n) {
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}


////判断是闰年函数 

//#include <stdbool.h>
//
//bool is_leap_year(int);
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d是闰年！\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年！\n",year);
//	}
//	return 0;
//}
//
//bool is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}


//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。

//#define N 100
//#include <stdbool.h>
//#include <math.h>
//
//bool is_prime(int);
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = N; i <= 200; i++) 
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//bool is_prime(int num) 
//{
//	int flag = 1;//假设这个数是素数
//	for (int j = 2; j <= sqrt(num); j++)
//	{
//		if (num % j == 0)
//		{
//			flag = 0;
//			return false;
//		}
//	}
//	if (flag == 1)
//	{
//		return true;
//	}
//}


//创建一个整形数组，完成对数组的操作:
//0.实现函数init() 初始化数组为全0
//1.实现print()  打印数组的每个元素
//2.实现reverse()  函数完成数组元素的逆置。

void init(int arr[], int lenth);
void print(int arr[], int lenth);
void reverse(int arr[], int lenth);

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr,sz);
	print(arr,sz);
	init(arr,sz);
	print(arr, sz);
	return 0;
}

void init(int arr[], int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//逆置一维数组
void reverse(int arr[], int lenth)
{
	int left = 0;
	int right =	lenth-1;
	while (left < right)
	{
		int temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
}

