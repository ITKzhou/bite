#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/// @Problem   : ָ����Ϊ�βΣ���ô�����Խ��յ���������Щ��        
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��һά���鴫�Σ��βε�����
///0. ���飺һά���飬ָ������
///1. ָ�룺һ��ָ�룬����ָ��

///������ά���鴫�Σ��βε�����
///0. ��ά���飨�в���ʡ�ԣ�
///1. ����ָ�루�в���ʡ�ԣ�

///����һ��ָ����Ϊ�βΣ��ɽ��յ�����
///0. һά������
///1. ���ͱ���ȡ��ַ
///2. ����ָ��

///�ģ�����ָ����Ϊ�βΣ��ɽ��յ�����
/// 0. һά������
/// 1. һ��ָ��ȡ��ַ
/// 2. ����ָ��
///****************************************************************************


/// @Problem   : typedef��ָ������������        
///��������������������������������������������������������������������������������������������������������������������������������������������������������             
/// @Solution  : 
///һ����������λ�÷���֮ǰָ������λ��
///0. typedef int (*pf_t)(int,int);  ����ָ���µ�������Ϊpf_t
///1. 

///****************************************************************************




/// @Problem   :         ָ�����飺ģ���ά����
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///Start******************************************************************Start          

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	        //int*  int*  int*
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *((*arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

///End**********************************************************************End



/// @Problem   :   ����ָ����Ϊ�βν��ն�ά���鴫��      
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ����ά���鴫�Σ������ǵ�һ�еĵ�ַ��������ָ��һά�����ָ�� int (*arrp��[5]
///0. 
///1. 

///����
///0. 
///1. 

///@Codeing    :  ��ά���鴫��
///****************************************************************************

//void print(int(*arrp)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arrp[i][j]);
//			printf("%d ", *((*(arrp + i) + j)));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//
//	return 0;
//}

///****************************************************************************









//����ָ�룺��C�����ȱ�ݡ�

//int main()
//{
//  //( *(void (*)()) 0 )();
//	//����Ĵ������ڵ���0��ַ���ĺ������������û�в���������������void
//	
//	//void (* signal(int , void(*)(int) ) ) (int);
// 
//	// typedef :������������
//	//typedef void (*pfun_t)(int);
//
//	return 0;
//}



/// @Problem   :     ʵ�ּӼ��˳��ļ����� ��������ת�Ʊ�    
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 


///@Codeing    :     ����ָ������
///****************************************************************************        

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*******************************\n");
	printf("******** 1.Add    2.Sub *******\n");
	printf("******** 3.Mul    4.Div *******\n");
	printf("******** 0.Exit         *******\n");
	printf("*******************************\n");
}

//void Print_fparr(int (*fparr[5])(int, int), int x, int y, size_t size)
//{
//	int i = 0;
//	for (i = 1; i < 5; i++)
//	{
//		int ret = fparr[i](x, y);
//		printf("%d \n", ret);
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	int (*fparr[])(int, int) = { NULL, &Add, &Sub, &Mul, &Div };
//	size_t sz = sizeof(fparr) / sizeof(fparr[0]);
//
//	printf("������x,y��\n");
//	scanf("%d %d", &x, &y);
//
//	Print_fparr(fparr, x, y, sz);
//
//	return 0;
//}

///@Codeing    :     �ص��������ƣ�
///****************************************************************************         


//void calr(int (*pf)(int ,int))//����ָ����Ϊ�β�
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������x,y��\n");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calr(Add);
//			break;
//		case 2:
//			calr(Sub);
//			break;
//		case 3:
//			calr(Mul);
//			break;
//		case 4:
//			calr(Div);
//			break;
//		case 0:
//			printf("�˳���������\n");
//			break;
//		default:
//			printf("��������������룡\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


///****************************************************************************







/// @Problem   :         ʹ��qsort����
///��������������������������������������������������������������������������������������������������������������������������������������������������������             
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :    �����������ݣ�����ṹ������
///****************************************************************************         
#include <stdlib.h>

//qsort����ԭ��
//void qsort(void* base, 
//		   size_t num, 
//		   size_t size,
//		   int (*compar)(const void*, const void*)
//		  );

//������������

//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
// 
////��ӡ
//
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////������������
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int num = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//	int size = sizeof(arr[0]);//ÿһ��Ԫ�صĴ�С
//	Print(arr, num);
//	qsort(arr, num, size, cmp_int);
//	Print(arr, num);
//
//	return 0;
//}


//����ṹ������

//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Print(struct Stu* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s, %d", arr[i].name, arr[i].age);
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int cmp_Stu_name(const void* p1, const void* p2)
//{
//	//return strcmp((const char*)p1, (const char*)p2);//ǿ������ת��Ϊ�Ƚ϶������Ӧ����
//	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name);
//}
//
//int main()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 18}, {"wangwu", 26} };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	Print(arr, num);
//	qsort(arr, num, size, cmp_Stu_name);
//	Print(arr, num);
//	return 0;
//}


///****************************************************************************



/// @Problem   :         ģ��qsort����
///��������������������������������������������������������������������������������������������������������������������������������������������������������           
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  ʹ�á�ð�����򡿣�ʵ��һ��������bubble_sort()
///****************************************************************************          

//#include <string.h>
//
////������Ԫ�ؽ��н���
//void swap(char* buf1, char* buf2, size_t size)
//{
//	size_t i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////ð��������
//void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* p1, const void* p2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//�Ƚ�����Ԫ�صĴ�С������������ǰ�ߴ󣻷��ظ�����ǰ��С������ת��Ϊchar*��
//			//��ȷ��baseָ���ܼ�1������һ�ֽڣ��ټ���һ��Ԫ�صĿ�ȣ������ҵ���һ��Ԫ��
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				//��������Ԫ�أ�Ԫ�ص�ÿ���ֽڶ�Ҫ����
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}	
//	}
//}
//
//void Print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int cmp_int(const void* p1, const void* p2)
//{
//	//����
//	//return *(int*)p1 - *(int*)p2;
//	
//	//����
//	return *(int*)p2 - *(int*)p1;
//
//}
//
//void test_int_sort()
//{
//	int arr[10] = { 2,5,1,6,3,0,4,9,8,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Print_s(struct Stu* ps, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s, %d\n", (ps + i)->name, (ps + i)->age);
//	}
//	printf("\n");
//}
//
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	//return strcmp((*(struct Stu*)p1).name, (*(struct Stu*)p2).name);
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int cmp_struct_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;//->��Ա���ʵ����ȼ���������ת��
//}
//
//void test_struct_sort()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",23},{"wnagwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	Print_s(s,sz);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_name);
//	Print_s(s, sz);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);
//	Print_s(s, sz);
//}
//
//int main()
//{
//	//������������
//	test_int_sort();
//
//	//����ṹ������
//	test_struct_sort();
//
//	return 0;
//}

///****************************************************************************



/// @Problem   :     �ҵ���2   
///��������������������������������������������������������������������������������������������������������������������������������������������������������           
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :     һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Σ�
///					  ��дһ�������ҳ�������ֻ����һ�ε����֡�
///****************************************************************************

//void Find_nums(int* arr, int sz, int* px, int* py)
//{
//	int i = 0;
//	int num = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];//�����������ֵ
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> pos) & 1) == 1)//���32λ�дӵ͵���λ��һ��Ϊ1��λ��
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//�ñ���λΪ��1�����ض�������Ԫ���ۻ�����ֻ����һ�ε�������������һ��
//		{
//			(*px) ^= arr[i];
//		}
//		else//�ñ���λΪ��0�����ͱض�������һ��ֻ����һ�ε�����
//		{
//			(*py) ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int x = 0;
//	int y = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find_nums(arr, sz, &x, &y);
//	printf("%d, %d\n", x, y);
//	return 0;
//}


///****************************************************************************



/// @Problem   :  ���Ͼ�����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ���
///				  �ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����     
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//int Find_num(int(*arr)[3], int k)
//{
//	int i = 0;
//	int j = 3 - 1;
//	while (i < 3 && j >= 0)
//	{
//		if (k > arr[i][j])
//		{
//			i++;
//		}
//		else if (k < arr[i][j])
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
//
//	int input = 0;
//	scanf("%d", &input);
//
//	if (Find_num(arr, input))
//	{
//		printf("���ҵ�\n");
//	}
//	else
//	{
//		printf("�����ҵ�\n");
//	}
//	return 0;
//}

///**********************************End***************************************




/// @Problem   :   �ַ�������:ʵ��һ�����������������ַ����е�k���ַ�      
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//#include <string.h>
//
//void reversal_part(char* src, int start, int end)
//{
//	int i, j, tmp;
//
//	for (i = start, j = end; i < j; i++, j--)//������������Ԫ��
//	{
//		tmp = src[j];
//		src[j] = src[i];
//		src[i] = tmp;
//	}
//}
//
//void leftRound(char* src, int k)//3
//{
//	int len = strlen(src);
//	if (k % len)
//	{
//		reversal_part(src, 0, k - 1);//��תǰ�沿��
//		reversal_part(src, k, len - 1);//��ת���沿��
//		reversal_part(src, 0, len - 1);//��ת����
//	}
//}
//
//int main()
//{
//	char src[] = "ABCDE";
//	int k = 0;
//	scanf("%d", &k);
//
//	leftRound(src, k);
//	printf("%s", src);
//
//	return 0;
//}

///**********************************End***************************************



/// @Problem   :    �ַ�����ת���     
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
///**********************************Start*************************************          


//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}


///**********************************End***************************************



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
//#include <assert.h>
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



/// @Problem   :         ģ��ʵ��strcmp
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ��
///0. 
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//#include <assert.h>
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



