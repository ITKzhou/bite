#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/// @Problem   : ָ����Ϊ�βΣ���ô�����Խ��յ���������Щ��        
///****************************************************************************            
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
///****************************************************************************            
/// @Solution  : 
///һ����������λ�÷���֮ǰָ������λ��
///0. typedef int (*pf_t)(int,int);  ����ָ���µ�������Ϊpf_t
///1. 

///****************************************************************************









//ָ�����飺ģ���ά����

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


//




/// @Problem   :   ����ָ����Ϊ�βν��ն�ά���鴫��      
///****************************************************************************            
/// @Solution  : 
///һ����ά���鴫�Σ������ǵ�һ�еĵ�ַ��������ָ��һά�����ָ�� int (*arrp��[5]
///0. 
///1. 

///����
///0. 
///1. 

///@Codeing    :  ��ά���鴫��
///��������������������������������������������������������������������������������������������������������������������������������������������������������

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
///****************************************************************************            
/// @Solution  : 
///һ��
///0. 
///1. 

///����
///0. 
///1. 

///@Codeing    :     ����ָ������
///��������������������������������������������������������������������������������������������������������������������������������������������������������            

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
///��������������������������������������������������������������������������������������������������������������������������������������������������������            


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
///****************************************************************************            
/// @Solution  : 
///һ��
///0. 
///1. 

///����
///0. 
///1. 

///@Codeing    :  
///��������������������������������������������������������������������������������������������������������������������������������������������������������            







///****************************************************************************





#include <stdlib.h>
//qsort����

//void qsort(void* base, 
//		   size_t num, 
//		   size_t size,
//		   int (*compar)(const void*, const void*)
//		  );


//int cmp_int(const void* p1, const void* p2)//�Զ�������Ԫ�رȽϵķ�ʽ
//{
//	return (*(int*)p1 - *(int*)p2);
//}
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
// ������������
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

//����ṹ��

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




//ʹ�á�ð�����򡿣�ģ��ʵ��һ��������bubble_sort()�����������������͵�����

#include <string.h>

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
//void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* p1, const void* p2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//if(arr[j] > arr[j + 1])
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				//ÿ���ֽڶ�����
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
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
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



//һ��������ֻ�����������ǳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����


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
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int x = 0;
//	int y = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Find_nums(arr, sz, &x, &y);
//	printf("%d, %d\n", x, y);
//
//	return 0;
//}




