#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

   

//输入n值，打印n行用“*”组成的X形图案
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) 
//    { // 注意 while 处理多个 case
//       // 64 位输出请用 printf("%lld") to
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if ((i == j) || (i + j == n - 1))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//行列式的转置，二维数组按列打印
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//有序数列合并
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[2000] = { 0 };
//	//输入两数组的长度
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	//连续输入数组元素
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//冒泡排序
//	for (i = 0; i < n + m; i++)//遍历数组
//	{
//		int j = 0;
//		for (j = 0; j< n + m - i - 1; j++)//确定一个元素时比较的趟数
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}	
//	}
//	//打印数组
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//有序数列合并
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //输入n和m
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    //输入两个升序序列
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并有序序列并输出
//    i = 0; j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//
//    //判断尚未遍历完的数组是否需要打印输出
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}
//


//【一维数组】输入10个整数，求平均值

//int main()
//{
//	int arr[10] = { 0 };
//	int sum = 0;
//	double arv = 0.0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("arv=%lf", sum / 10.0);
//
//	return 0;
//}


//【一维数组】交换数组

//int main()
//{
//	int i = 0;
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {6,7,8,9,10};
//	int temp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("交换后arr1[]=");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n交换后arr2[]=");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}