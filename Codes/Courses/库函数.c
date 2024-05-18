#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

/// @Problem   :        ģ��ʵ��strlen 
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
///
///@Codeing    :  ������ʵ��
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
///         ָ��ͬһ��ռ������ָ���������������֮��Ԫ�صĸ���                                                                                                                                               
///****************************************************************************          

//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;//ָ��ͬһ��ռ�
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
///     �ݹ�ʵ��                                                                                                                                                   
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





/// @Problem   :         ģ��ʵ��strcpy   strncpy
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 
///@Codeing    :  char * strcpy ( char * destination, const char * source );
///*****************************************************************************          

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





/// @Problem   :         ģ��ʵ��strcat    strncat
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
///
///
///@Codeing    :  char * strcat ( char * destination, const char * source );
///*****************************************************************************          

//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1 != '\0')//�ҵ�str1�ַ�����ָ��'\0'��ָ��
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)//str2���Ƶ�str1��
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

/// @Codeing  :  ģ��ʵ�� strncat()
///                                                                           
///   char * strncat ( char * destination, const char * source, size_t num );                                                                                                                                                     
///****************************************************************************          

//char* my_strncat(char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1 != '\0')//�ҵ�str1�ַ�����ָ��'\0'��ָ��
//	{
//		str1++;
//	}
//	while ((num--) && (*str1++ = *str2++))//str2���Ƶ�str1��
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





/// @Problem   :         ģ��ʵ��strcmp
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
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
//	printf("%d\n", my_strcmp(str1, str2));//��������str1�󣻸�������str1С
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





/// @Problem   :         ģ��ʵ��strstr
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///@Codeing    :  
///****************************************************************************         

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

///****************************************************************************





/// @Problem   :        ʹ��strtok :�и��ַ���
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// 
///@Codeing    :    char * strtok ( char * str, const char * delimiters );
///***************************************************************************         

//int main()
//{
//	char str[] = "122345@qq.com";
//	char buf1[200] = { 0 };
//	strcpy(buf1, str);//��arr������һ����ʱ������
//
//	for (char* pch = strtok(buf1, ".@"); pch != NULL; pch = strtok(NULL, ".@"))
//	{
//		printf("%s\n", pch);
//	}
//	return 0;
//}

///*****************************************************************************




/// @Problem   :  strerror: ���ض�Ӧ���������Ϣchar * strerror ( int errnum );  
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 
///@Codeing    :  perror:ֱ�Ӵ�ӡ������Ϣvoid perror ( const char * str );
///****************************************************************************          

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

///******************************************************************************



/// @Problem   :    �ַ�����     
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ���ַ����ຯ��
///0. int isxdigit ( int c );��ʮ������
///1. 

///�����ַ�ת������
///0. int toupper ( int c );
///1. int tolower ( int c );

///@Codeing    :  ��д��תСд��Сд��ת��д
///****************************************************************************          

//#include <ctype.h>
//
//int main()
//{
//	char str[20] = "s0W3Xa1H2gg";
//	char* p = str;
//	while (*p)//'0' ASCII��-48   '\0' ASCII��-0
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






/// @Problem   :      ģ��ʵ�� memcpy   
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. ǿ������ת������ʱ�ģ�ֻ���ڱ��α��ʽ����Ч��
///1. 
///@Codeing    :  void * memcpy ( void * destination, const void * source, size_t num );
///****************************************************************************          

//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	void* ret = dest;
//	while (num--)//num�������������㣨��1��������ѭ���������㣨��1��������ѭ��
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
//	//str2����5��Ԫ�ص�str1��   '20'  ��ʾ20�ֽ�
//	int* p = (int*)my_memcpy(arr1, arr2, 20);
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	
//	return 0;
//}

///******************************************************************************






/// @Problem   :    ģ��ʵ�� memmove     
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��ʵ���ص��ڴ�Ŀ���
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
//			//���ȼ�����׺++  (����ת����������)ͬ��
//			//����ԣ�(����ת����������)���ҵ���
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
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ���������ֽ�Ϊ��λ
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
//	printf("%d\n", memcmp(arr1, arr2, 16));//'16'���ֽ�Ϊ��λ
//
//	return 0;
//}

///******************************************************************************




/// @Problem   :      ģ��ʵ�� atio  
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ��
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
//}Sta = INVAILD;//�������Ĭ��Ϊ�Ƿ�
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
//			ret = ret * 10 + flag * (*str - '0');//��ȥ�ַ�0����������0
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;//ǿ������ת��Ϊint�������ķ���ֵ��int��
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		Sta = VAILD; //����ת�����ˣ���ĩβ�� \0
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
//		printf("�Ϸ�ת��:%d\n", ret);
//	}
//	else if (Sta == INVAILD)
//	{
//		printf("�Ƿ�ת��:%d\n", ret);
//	}
//	return 0;
//}

///******************************************************************************







