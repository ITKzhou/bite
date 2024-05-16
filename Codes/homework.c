#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

/// @Time   :            2024 - 04 - 29_指针运算等_作业                                                                                                                    
/// @Problem  :                                                         
///                字符串左旋		实现一个函数，可以左旋字符串中的k个字符                                                           
///                                                                            
///————————————————————————————————————————————————————————————————————————————                                                                                     
/// @Codeing  :  
///           遍历要左旋的字符串，每次都拿到第一个元素，                                                               
///       遍历数组，使其后面的元素依次向前补位，再将第一个字符插入到数组最后                                                                                                                                               
///****************************************************************************          

//#include <string.h>
//
//void leftRound(char str[], int time)//2
//{
//	int i = 0;
//	int len = strlen(str);//4
//	time %= len;//左旋0个和len个等于没有左旋
//	for (i = 0; i < time; i++)//0 1 
//	{
//		char tmp = str[0];//A	拿到第一个元素	
//		int j = 0;
//		for (j = 0; j < len - 1; j++)//0 1 2
//		{
//			str[j] = str[j + 1];//后面的元素依次向前补位
//		}
//		str[j] = tmp;//将第一个元素插入到数组最后
//	}
//}
//
//int main()
//{
//	char str[20] = { "ABCD"};
//	int n = 0;
//	puts("请输入需要左旋的字符个数:>");
//	scanf("%d", &n);
//	leftRound(str, n);
//	printf("%s\n", str);
//
//	return 0;
//}


/// @Codeing  :  
/// 库函数实现	strcpy()	strncat()                            
///	把不需要左旋的字符拷贝到arr中
/// 把str中需要左旋的字符拼接到arr，最后arr整体拷贝到str中				                                                                                                                                       
///****************************************************************************  

//#include <string.h>
//
//void leftRound(char str[], int time)
//{
//	char arr[10] = { 0 };
//	int len = strlen(str);
//	strcpy(arr, str + time);//把不需要左旋的字符拷贝到arr中
//	strncat(arr, str, time);//把str中需要左旋的字符拼接到arr
//	strcpy(str, arr);
//}
//
//int main()
//{
//	char str[] = { "ABCD" };
//	int n = 0;
//	puts("请输入需要左旋的字符个数:>");
//	scanf("%d", &n);
//	leftRound(str, n);
//	printf("%s\n", str);
//
//	return 0;
//}



/// @Codeing  :  
/// 函数嵌套调用		leftRound（）	ReverseStr（）
/// 逆置字符串前半部分
/// 再逆置字符串后半部分，最后逆置整个字符串                                                                                                                                                        
///****************************************************************************          

//void ReverseStr(char arr[], int start, int end)
//{
//	while (start < end)
//	{
//		char tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//void leftRound(char arr[], int time)
//{
//	int len = strlen(arr);
//	time %= len;
//	ReverseStr(arr, 0, time - 1);//逆置字符串前半部分
//	ReverseStr(arr, time, len - 1);//逆置字符串后半部分
//	ReverseStr(arr, 0, len - 1);//逆置整个字符串
//}
//
//int main()
//{
//	char str[] = { "ABCD" };
//	int n = 0;
//	puts("请输入需要左旋的字符个数:>");
//	scanf("%d", &n);
//	leftRound(str, n);
//	printf("%s\n", str);
//
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  






///@Time    :2024 - 04 - 29_指针运算等_作业

///@Problem : 
///                                                                          
///            调整数组使奇数全部都位于偶数前面                                                                 
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///          运用左右下标向中间靠拢                                                                                                                                                                                                                      
///****************************************************************************          

//void Adjust_odd_even(int* pr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && pr[left] % 2 != 0)//从左边开始，是偶数就停下，是奇数就继续往后找
//		{
//			left++;
//		}
//		while (left < right && pr[right] % 2 == 0)//从右边开始，是奇数就停下，是偶数就继续往前找
//		{
//			right--;
//		}
//		int tmp = pr[left];
//		pr[left] = pr[right];
//		pr[right] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Adjust_odd_even(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  



///@Time    :2024-05-06_数组名理解等_作业	
 
///@Problem : 
///                   字符旋转结果                                                        
///  写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串，是，返回1，否返回0                                                                         
///————————————————————————————————————————————————————————————————————————————  
/// @Codeing  :  
///        一次旋转一个字符，旋转后组成的新字符串与目标字符串比较                                                                   
///                                                                                                                                                        
///****************************************************************************          

//char str1[] = "ABCD";//字符数组变量可以修改里面的字符
//char* str2 = "CDAB";//而字符指针变量指向了一个字符串常量，不能修改值

//int findRound(char* str1, char* str2)
//{
//	int i = 0;
//	int len = strlen(str1);
//
//	
//	for (i = 0; i < len; i++) 
//	{
//		char tmp = str1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str1[j] = str1[j + 1];//后面的元素依次向前补位
//		}
//		str1[j] = tmp;//将第一个元素插入到数组最后
//		if (strcmp(str1, str2) == 0)//两字符串相等返回0,
//		{
//			return 1;//找到，返回1
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char str1[] = "ABCD";
//	char str2[] = "CDAB";
//	printf("%d\n", findRound(str1, str2));
//	
//	return 0;
//}


///@Codeing :
///                                                                           
///           使用库函数  strcpy() strcat() strstr()                                                                                                                                           
///****************************************************************************          

//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再拼接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}
//
//int main()
//{
//	char str1[] = "ABCD";
//	char str2[] = "CDAB";
//	printf("%d\n", findRound(str1, str2));
//	
//	return 0;
//}

/// @Codeing  :  
///             模拟库函数strstr() 实现本题要求                                                             
///  const char * strstr ( const char * str1, const char * str2 );
/// 两字符串同步遍历，标记str1开始的位置，字符序列相同就一直遍历，
/// 不等str1从标记的位置加1开始，str2从头开始，再次同步遍历，
/// 直到要么str1遍历到末尾，说明没有找到；str2遍历到末尾，说明找到了                                                                                                                                                      
///****************************************************************************          

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cp;//标记每趟遍历的开始位置
//	const char* s1;//遍历str1
//	const char* s2;//遍历str2
//	assert(str1 && str2);
//
//	cp = str1;
//
//	while (*cp)//str1中每个字符都按子集str2遍历一趟
//	{
//		s1 = cp; 
//		s2 = str2;
//		//对应位置的值相等，就一直遍历，否则，str1中开始遍历的位置加1
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;//开始的位置加1
//	}
//	return NULL;
//}
//
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再拼接一遍
//	return my_strstr(tmp, find) != NULL;
//}
//
//int main()
//{
//	char str1[] = "ABCD";
//	char str2[] = "CDAB";
//	printf("%d\n", findRound(str1, str2));
//
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  




///@Time    :2024-05-06_数组名理解等_作业	

///@Problem : 
///           杨氏矩阵                                                                
///     有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
/// 请编写程序在这样的矩阵中查找某个数字是否存在                                                                       
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///                                                                                                                                                        
///****************************************************************************          

//int youngMatrix(int (*arr)[3], int k)//形参定义为一个数组指针
//{
//	int i = 0;
//	int j = 2;
//	while (i < 3 && j >= 0)
//	{
//		if (k > arr[i][j])//要找的数比右上顶多元素大，则k值一定不在i这一行，i++
//		{
//			i++;
//		}
//		else if (k < arr[i][j])//要找的数比右上顶多元素小，则k值一定不在j这一列，j--
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
//	int k = 0;
//	while (scanf("%d", &k) != EOF)
//	{
//		int ret = youngMatrix(arr, k);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


/// @Codeing  :  
///                                                                           
///        找到k，就返回k在这个数组中的下标                                                                                                                                                
///****************************************************************************          

//int youngMatrix(int(*arr)[3], int num)//形参定义为一个数组指针
//{
//	int i = 0;
//	int j = 2;
//	while (i < 3 && j >= 0)
//	{
//		if (num > arr[i][j])//要找的数比右上顶多元素大，则k值一定不在i这一行，i++
//		{
//			i++;
//		}
//		else if (num < arr[i][j])//要找的数比右上顶多元素小，则k值一定不在j这一列，j--
//		{
//			j--;
//		}
//		else
//		{
//			return 3 * i + j;
//		}
//	}
//	return EOF;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	while (scanf("%d", &k) != EOF)
//	{
//		int ret = youngMatrix(arr, k);
//		if (ret != EOF)
//		{
//			printf("%d,%d\n", ret / 3, ret % 3);//二维数组是连续的一维数组
//		}
//		else
//			printf("Didn't find k-coordinate!\n");
//	}
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  





