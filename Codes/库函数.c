#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

/// @Problem   :        ģ��ʵ��strlen 
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
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



/// @Problem   :         ģ��ʵ��strcpy
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          
//
//char* my_strcpy(char* des, const char* sor)
//{
//	char* ret = des;
//	assert(sor && des);
//	while (*des++ = *sor++);//��ָ��'\0'ʱ���Ƚ����ø��ƹ�������������������1
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




/// @Problem   :         ģ��ʵ��strcat
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//char* my_strcat(char* str1, const char* str2)
//{
//	char* ret = str1;
//	//�ҵ�str1�ַ�����ָ��'\0'��ָ��
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	//str2���Ƶ�str1��
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



/// @Problem   :         ģ��ʵ��strcmp
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
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
//	printf("%d\n", my_strcmp(str1, str2));//��������str1�󣻸�������str1С
//	return 0;
//}

///**********************************End***************************************




/// @Problem   :         ģ��ʵ��strstr
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cp;//���ÿ�˱����Ŀ�ʼλ��
//	const char* s1;//����str1
//	const char* s2;//����str2
//	assert(str1 && str2);
//
//	cp = str1;
//
//	while (*cp)//str1��ÿ���ַ������Ӽ�str2����һ��
//	{
//		s1 = cp; 
//		s2 = str2;
//		//��Ӧλ�õ�ֵ��ȣ���һֱ����������str1�п�ʼ������λ�ü�1
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;//��ʼ��λ�ü�1
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
//		printf("�����ҵ�\n");
//	}
//
//	return 0;
//}

///**********************************End***************************************



/// @Problem   :        ʹ��strtok :�и��ַ���
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
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




/// @Problem   :  strerror: ���ض�Ӧ���������Ϣchar * strerror ( int errnum );  
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  perror:ֱ�Ӵ�ӡ������Ϣvoid perror ( const char * str );
///**********************************Start*************************************          

//int main()
//{
//	FILE* pf = fopen("add.txt", "r");//��ֻ������ʽ���ļ�
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�ԭ���ǣ�%s\n", strerror(errno));
//		perror("���ļ�ʧ��");
//		return 1;
//	}
//	else
//	{
//		printf("���ļ��ɹ�\n");
//	}
//	return 0;
//}

///**********************************End***************************************







