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







