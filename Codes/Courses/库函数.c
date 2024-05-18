#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

/// @Problem   :        模拟实现strlen 
///————————————————————————————————————————————————————————————————————————————            
///
///@Codeing    :  计算器实现
///****************************************************************************          

//int  my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = { "abcdef" };
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	for (int i = 0; str[i] != '\0'; ++i)
//	{
//		printf("%c ", str[i]);
//	}
//	return 0;
//}


/// @Codeing  :  
///                                                                           
///         指向同一块空间的两个指针相减，返回它们之间元素的个数                                                                                                                                               
///****************************************************************************          

//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;//指向同一块空间
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
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	for (int i = 0; str[i] != '\0'; ++i)
//	{
//		printf("%c ", str[i]);
//	}
//	return 0;
//}


/// @Codeing  :  
///                                                                           
///     递归实现                                                                                                                                                   
///****************************************************************************          

//int my_strlen(const char* str){
//	assert(str);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[] = { "abcdef" };
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	for (int i = 0; str[i] != '\0'; ++i)
//	{
//		printf("%c ", str[i]);
//	}
//	return 0;
//}


///****************************************************************************





/// @Problem   :         模拟实现strcpy   strncpy
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 
///@Codeing    :  char * strcpy ( char * destination, const char * source );
///*****************************************************************************          

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
//	char str1[] = "abcdef";
//	char str2[20] = { 0 };
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//
//	return 0;
//}


/// @Codeing  :  
///                                                                           
///  char * strncpy ( char * destination, const char * source, size_t num );                                                                                                                                           
///****************************************************************************          

//static char* my_strncpy(char* des, const char* sor,int num)
//{
//	char* ret = des;
//	assert(sor && des);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*des = *sor;
//		des++;
//		sor++;
//	}
//	*des = 0;
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[20] = { 0 };
//	my_strncpy(str2, str1, 4);
//	printf("%s\n", str2);
//	return 0;
//}


///******************************************************************************





/// @Problem   :         模拟实现strcat    strncat
///————————————————————————————————————————————————————————————————————————————            
///
///
///@Codeing    :  char * strcat ( char * destination, const char * source );
///*****************************************************************************          

//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1 != '\0')//找到str1字符串中指向'\0'的指针
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)//str2复制到str1中
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = { "abc" };
//	char str2[] = "defg";
//	printf("%s\n", my_strcat(str1, str2));
//	return 0;
//}

/// @Codeing  :  模拟实现 strncat()
///                                                                           
///   char * strncat ( char * destination, const char * source, size_t num );                                                                                                                                                     
///****************************************************************************          

//char* my_strncat(char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1 != '\0')//找到str1字符串中指向'\0'的指针
//	{
//		str1++;
//	}
//	while ((num--) && (*str1++ = *str2++))//str2复制到str1中
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = { "abc" };
//	char str2[] = "defg";
//	printf("%s\n", my_strncat(str1, str2, 3));
//	return 0;
//}

///*****************************************************************************





/// @Problem   :         模拟实现strcmp
///————————————————————————————————————————————————————————————————————————————            
///
///@Codeing    :  int strcmp ( const char * str1, const char * str2 );
///**************************************************************************          

//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[20] = { "abcewq" };
//	char str2[20] = { "abcjwess" };
//
//	printf("%d\n", my_strcmp(str1, str2));//正数，则str1大；负数，则str1小
//	return 0;
//}

/// @Codeing  :  
///                                                                           
///    int strncmp ( const char * str1, const char * str2, size_t num );                                                                                                                                                    
///****************************************************************************          

//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	while (num-- && *str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[20] = { "abcdfg" };
//	char str2[20] = { "abcdeg" };
//
//	printf("%d\n", my_strncmp(str1, str2, 5));
//	return 0;
//}

///****************************************************************************





/// @Problem   :         模拟实现strstr
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///@Codeing    :  
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
//int main()
//{
//	char str1[20] = { "abcdefabcdef" };
//	char str2[20] = { "efabc" };
//	if (my_strstr(str1, str2) != NULL)
//	{
//		printf("%s\n", my_strstr(str1, str2));
//	}
//	else
//	{
//		printf("不能找到\n");
//	}
//
//	return 0;
//}

///****************************************************************************





/// @Problem   :        使用strtok :切割字符串
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 
///@Codeing    :    char * strtok ( char * str, const char * delimiters );
///***************************************************************************         

//int main()
//{
//	char str[] = "122345@qq.com";
//	char buf1[200] = { 0 };
//	strcpy(buf1, str);//把arr拷贝到一个临时数组中
//
//	for (char* pch = strtok(buf1, ".@"); pch != NULL; pch = strtok(NULL, ".@"))
//	{
//		printf("%s\n", pch);
//	}
//	return 0;
//}

///*****************************************************************************




/// @Problem   :  strerror: 返回对应错误码的信息char * strerror ( int errnum );  
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 
///@Codeing    :  perror:直接打印错误信息void perror ( const char * str );
///****************************************************************************          

//int main()
//{
//	FILE* pf = fopen("add.txt", "r");//以只读的形式打开文件
//	if (pf == NULL)
//	{
//		printf("打开文件失败，原因是：%s\n", strerror(errno));
//		perror("打开文件失败");
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	return 0;
//}

///******************************************************************************



/// @Problem   :    字符函数     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：字符分类函数
///0. int isxdigit ( int c );是十六进制
///1. 

///二：字符转换函数
///0. int toupper ( int c );
///1. int tolower ( int c );

///@Codeing    :  大写就转小写，小写就转大写
///****************************************************************************          

//#include <ctype.h>
//
//int main()
//{
//	char str[20] = "s0W3Xa1H2gg";
//	char* p = str;
//	while (*p)//'0' ASCII码-48   '\0' ASCII码-0
//	{
//		if (islower(*p))
//		{
//			*p = toupper(*p);
//		}
//		else if (isupper(*p))
//		{
//			*p = tolower(*p);
//		}
//		p++;
//	}
//	printf("%s\n", str);
//	return 0;
//}

///******************************************************************************






/// @Problem   :      模拟实现 memcpy   
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 强制类型转换是临时的，只是在本次表达式中有效。
///1. 
///@Codeing    :  void * memcpy ( void * destination, const void * source, size_t num );
///****************************************************************************          

//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	void* ret = dest;
//	while (num--)//num先问条件，满足（减1），进入循环，不满足（减1），跳过循环
//	{
//		*(char*)dest = *(char*)sour;
//		dest = (char*)dest + 1;
//		sour = (char*)sour + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//str2拷贝5个元素到str1中   '20'  表示20字节
//	int* p = (int*)my_memcpy(arr1, arr2, 20);
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	
//	return 0;
//}

///******************************************************************************






/// @Problem   :    模拟实现 memmove     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：实现重叠内存的拷贝
///0. 
///1. 

///@Codeing    :  void * memmove ( void * destination, const void * source, size_t num );
///****************************************************************************          

//#include <assert.h> 
//
//void* my_memmove(char* dest, const char* sour, size_t num)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	if (dest < sour)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			*(char*)dest = *(char*)sour;
//			dest = (char*)dest + 1;
//			sour = (char*)sour + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			//优先级：后缀++  (类型转换，解引用)同级
//			//结合性：(类型转换，解引用)从右到左
//			*((char*)dest + num) = *((char*)sour + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//my_memmove(arr + 2, arr, 16);//1 2 1 2 3 4 7 8 9 10
//	my_memmove(arr, arr + 2, 16);//3 4 5 6 5 6 7 8 9 10
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


///******************************************************************************





/// @Problem   :        memset     memcmp
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：都是以字节为单位
///0. 
///1. 

///@Codeing    : void * memset ( void * ptr, int value, size_t num ); 
///			 int memcmp ( const void * ptr1, const void * ptr2, size_t num );
///****************************************************************************          

//int main()
//{
//	char str[20] = "Hello bite";
//	int arr1[10] = { 1,2,3,0x02020304,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,0x01020304,6,1,1,0,0,0 };
//	printf("%s\n", (char*)memset(str, 'z', 4));
//	printf("%d\n", memcmp(arr1, arr2, 16));//'16'以字节为单位
//
//	return 0;
//}

///******************************************************************************




/// @Problem   :      模拟实现 atio  
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：
/// 0. 

/// @Codeing    :  
///****************************************************************************          

//#include<stdio.h>
//#include<assert.h>
//#include<ctype.h>
//#include<stdlib.h>
//
//enum State
//{
//	VAILD,
//	INVAILD
//}Sta = INVAILD;//创造变量默认为非法
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag * (*str - '0');//减去字符0，才是数字0
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;//强制类型转化为int（函数的返回值是int）
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		Sta = VAILD; //正常转换完了，到末尾的 \0
//	}
//	return (int)ret;
//}
//
//
//int main()
//{
//	char arr[20] = "1234";
//	int ret = my_atoi(arr);
//	if (Sta == VAILD)
//	{
//		printf("合法转换:%d\n", ret);
//	}
//	else if (Sta == INVAILD)
//	{
//		printf("非法转换:%d\n", ret);
//	}
//	return 0;
//}

///******************************************************************************







