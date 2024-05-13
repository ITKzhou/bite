#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

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



/// @Problem   :         模拟实现strcpy
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          
//
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




/// @Problem   :         模拟实现strcat
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//char* my_strcat(char* str1, const char* str2)
//{
//	char* ret = str1;
//	//找到str1字符串中指向'\0'的指针
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	//str2复制到str1中
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = { "abc" };
//	char str2[] = "def";
//	printf("%s\n", my_strcat(str1, str2));
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

///**********************************End***************************************




/// @Problem   :         模拟实现strstr
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

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

///**********************************End***************************************



/// @Problem   :        使用strtok :切割字符串
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 

///@Codeing    :      char * strtok ( char * str, const char * delimiters );
///**********************************Start*************************************          

//int main()
//{
//	char arr[] = "zpengwei@yeah.net@hehe.haha";
//	char buf1[200] = { 0 };//"zpengwei\0yeah.net"
//	strcpy(buf1, arr);
//
//	char* p = "@.";
//	char* s = NULL;
//	for (s = strtok(buf1, p); s != NULL; s=strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}

///**********************************End***************************************




/// @Problem   :  strerror: 返回对应错误码的信息char * strerror ( int errnum );  
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 

///@Codeing    :  perror:直接打印错误信息void perror ( const char * str );
///**********************************Start*************************************          

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

///**********************************End***************************************



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
///**********************************Start*************************************          

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

///**********************************End***************************************






/// @Problem   :      模拟实现 memcpy   
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 强制类型转换是临时的，只是在本次表达式中有效。
///1. 

///二：
///0. 
///1. 

///@Codeing    :  void * memcpy ( void * destination, const void * source, size_t num );
///**********************************Start*************************************          

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

///**********************************End***************************************






/// @Problem   :    模拟实现 memmove     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：实现重叠内存的拷贝
///0. 
///1. 

///@Codeing    :  void * memmove ( void * destination, const void * source, size_t num );
///**********************************Start*************************************          

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



///**********************************End***************************************





/// @Problem   :        memset     memcmp
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：都是以字节为单位
///0. 
///1. 

///@Codeing    : void * memset ( void * ptr, int value, size_t num ); 
///			 int memcmp ( const void * ptr1, const void * ptr2, size_t num );
///**********************************Start*************************************          

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

///**********************************End***************************************




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
//	初始化malloc
//	for (i = 0; i < MAL; i++)
//	{
//		pm[i] = i + 1;
//	}
//	打印malloc申请的空间
//	for (i = 0; i < MAL; i++)
//	{
//		printf("%d ", pm[i]);
//		if (i == MAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	calloc自动初始化，打印calloc申请的空间
//	for (i = 0; i < CAL; i++)
//	{
//		printf("%d ", pc[i]);
//		if (i == CAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	对malloc申请的空间pm扩容
//	int* pr = (int*)realloc(pm, REAL * sizeof(int));
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








