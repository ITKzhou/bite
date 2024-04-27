#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdlib.h>
#include <Windows.h>
//字符由两端向中间逐个显示
//int main()
//{
//	//定义两个字符数组
//	char chr1[] = { "HolleZhouYuan" };
//	char chr2[] = { "#############" };
//	//得到数组的下标
//	int left = 0;
//	int rigt = sizeof(chr1) / sizeof(chr1[0]) - 1;
//	//chr1[]放入chr2[]中
//	while (left <= rigt)
//	{
//		chr2[left] = chr1[left];
//		chr2[rigt] = chr1[rigt];
//		printf("%s", chr2);
//		Sleep(1000);//显示停顿效果
//		system("cls");//刷新一下显示
//		left++;//控制下一轮的循环
//		rigt--;
//	}
//	printf("%s\n", chr2);	
//	return 0;
//}


//二分查找实现在有序数列中找的key值，返回数组下标

//int main()
//{
//	//定义数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//设置key值
//	int key = 0;
//	printf("请输入你要查找的值：\n");
//	scanf("%d", &key);
//
//	//拿到数组下标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int rigt = sz - 1;
//	int flag = 0;//假设进入循环后标记不能找到，找到就置1
//
//	//二分查找
//	//0.能找到
//	while (left <= rigt)
//	{
//		//计算中间下标
//		int mid = left + (rigt - left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < arr[mid])
//		{
//			rigt = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			flag = 1;//找到置1
//			break;
//		}
//	}
//	//1.不能找到
//	if (!flag)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


