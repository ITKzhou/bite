#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	const char* p = "abcdef";
//	printf("%s\n", p);
//	printf("%c\n", *p);
//
//	//*p = 'e';
//
//	         //[abcdef\0]
//	         //char arr[] = "abcdef";
//
//	//printf("%c\n", "abcdef"[3]);
//
//	return 0;
//}

//
//<��ָoffer> - ��ˢ
//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	if (&str3 == &str4)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//
//	//��������ʹ�õ�
//	int* arr[] = { &a, &b, &c, &d };
//
//	return 0;
//}

//����ʹ��ָ������ģ��һ����ά����

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	        //int*  int*  int*
//	//����ָ������
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	//�ַ�ָ������
//	char* arr[5] = {"hello bit", "hehe", "penggeC", "bitejiuyeke", "C++"};
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}

//�����������
//��������������Ԫ�صĵ�ַ
//���Ǵ���2�����⣺
//1. sizeof(������)���������������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬ȡ����������ĵ�ַ
//

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr+1);
//
//	//ָ�����;�����ָ��+1������+�����ֽ�
//
//	return 0;
//}


//int main()
//{
//	//int * p;
//	int arr[10] = { 0 };
//
//	//int [10]
//	//int * p;
//	//int [10] * p;
//
//	int (*p)[10] = &arr; //p�������������ĵ�ַ�ģ�p��������ָ��
//	
//	char* arr2[5];
//	char* (*pc)[5] = &arr2;
//
//	int arr3[] = { 1,2,3 };
//	int (*p3)[3] = &arr3;
//
//	return 0;
//}

//
//����ָ�뵽����ʲô���أ�
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	/*
//	int (*p)[10] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	*/
//
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//
//
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
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


//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]===>*(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//&���������Ǻ����ĵ�ַ
//	//������Ҳ�Ǻ����ĵ�ַ
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//int (*pf1)(int, int) = Add;//pf1���Ǻ���ָ�����
//
//	//int (* pf2)(int, int) = &Add;
//	//int ret = (* pf2)(2, 3);
//
//	//int (* pf2)(int, int) = Add;
//	//int ret = pf2(2, 3);
//	//int ret = pf2(2, 3);
//
//	//int ret = Add(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//0x0012ff40
//0x0045ff80
//
//int main()
//{
//	//void (*)() ����ָ������
//	//int a = (int)3.14
//	//����Ĵ������ڵ���0��ַ���ĺ������������û�в���������������void
//	//( *(void (*)()) 0 )();
//	//int *p = (int*)0x0012ff40;
//
//	//void (* signal(int , void(*)(int) ) ) (int);
//
//	////void (*)(int) signal(int, void(*)(int));
//	//typedef void (*pfun_t)(int);
//	//pfun_t signal(int, pfun_t);
//
//	return 0;
//}
//
//typedef  unsigned int uint;
//int main()
//{
//	uint a;
//	unsigned int b;
//
//	return 0;
//}
//














