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
///**********************************Start*************************************          

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

///**********************************End***************************************






/// @Problem   :      ģ��ʵ�� memcpy   
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. ǿ������ת������ʱ�ģ�ֻ���ڱ��α��ʽ����Ч��
///1. 

///����
///0. 
///1. 

///@Codeing    :  void * memcpy ( void * destination, const void * source, size_t num );
///**********************************Start*************************************          

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

///**********************************End***************************************






/// @Problem   :    ģ��ʵ�� memmove     
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��ʵ���ص��ڴ�Ŀ���
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



///**********************************End***************************************





/// @Problem   :        memset     memcmp
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ���������ֽ�Ϊ��λ
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
//	printf("%d\n", memcmp(arr1, arr2, 16));//'16'���ֽ�Ϊ��λ
//
//	return 0;
//}

///**********************************End***************************************




/// @Problem   :   malloc     calloc     realloc   free
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ����ȷʹ��
/// 0. void* malloc (size_t size);
/// 1. void* calloc (size_t num, size_t size);
/// 2. void* realloc (void* ptr, size_t size);�Զ�̬������ڴ�ռ��������
/// 3. void free (void* ptr);ֻ�ܶԶ�̬���ٵĿռ�ʹ�ã����ɶԷǶ�̬�����ڴ�ʹ��

/// �����쳣����
/// 0. ��̬���ٿռ䣬�����NULLָ���ж�
/// 1. ����Խ�����
/// 2. ���ɶԷǶ�̬�����ڴ�ʹ��free()
/// 3. ����ʹ��free()�ͷŲ��ֶ�̬�ڴ�ռ�
/// 4. ���ɶ�ͬһ�鶯̬�ڴ����ͷ�

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
//	��ʼ��malloc
//	for (i = 0; i < MAL; i++)
//	{
//		pm[i] = i + 1;
//	}
//	��ӡmalloc����Ŀռ�
//	for (i = 0; i < MAL; i++)
//	{
//		printf("%d ", pm[i]);
//		if (i == MAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	calloc�Զ���ʼ������ӡcalloc����Ŀռ�
//	for (i = 0; i < CAL; i++)
//	{
//		printf("%d ", pc[i]);
//		if (i == CAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	��malloc����Ŀռ�pm����
//	int* pr = (int*)realloc(pm, REAL * sizeof(int));
//	if (pr == NULL)//����ж��Ƿ�Ϊ�գ����ö���
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








