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


//����ָ�룺��ά���鴫��ʱ��Ϊ�β�

//void print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", p[i][j]);
//			printf("%d ", *((*(p + i) + j)));
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


//����ָ�����飺ʵ�ּӼ��˳��ļ����� ��������ת�Ʊ�

//0.��ͨʵ��

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

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
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

//1.����ָ������ʵ��

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//���庯��ָ������pfar
//	int (* pfarr[])(int, int) = { NULL, &Add, &Sub, &Mul, &Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);//���ú���ָ������pfar
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������x,y��\n");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
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

//2.�ص�����ʵ��


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







