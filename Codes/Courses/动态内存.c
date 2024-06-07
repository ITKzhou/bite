#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>


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
//#include <assert.h>
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
//	//��ʼ��malloc
//	for (i = 0; i < MAL; i++)
//	{
//		pm[i] = i + 1;
//	}
//	for (i = 0; i < MAL; i++)//��ӡmalloc����Ŀռ�
//	{
//		printf("%d ", pm[i]);
//		if (i == MAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	//calloc�Զ���ʼ������ӡcalloc����Ŀռ�
//	for (i = 0; i < CAL; i++)
//	{
//		printf("%d ", pc[i]);
//		if (i == CAL - 1)
//		{
//			printf("\n");
//		}
//	}
//	//��malloc����Ŀռ�pm����
//	int* pr = (int*)realloc(pm, REAL * sizeof(int));
//	//assert(pr);
//
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





/// @Problem   :     ����ջ�ռ��ַ������    
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ��
/// 0. Ұָ�룬���صĵ�ַָ���˲������Լ����ڴ�ռ䣬�Ƿ�����
/// 1. �ֲ�������ָ�벻��������ֵ����Ϊ�����ڵĿռ��ں������غ�ͻ��ͷŵ�

/// ��������ջ�ռ����������
/// 0. ���ٵľֲ�������Ӱ�죬ֱ�ӷ��صı�����ֵ
/// 1. 

/// @Codeing    : ���޷���ֵ���ǿ�ָ�봫�Σ��βξ�����Ӧָ�����ͣ�����ָ�봫�Σ��βξ��Ƕ���ָ�롣 
///**********************************Start*************************************          


//�����޷���ֵ

//void GetMemory(char** p)//�βζ���ָ��
//{
//	*p = (char*)malloc(100);////ʹstrָ��̬������ڴ�ռ䣬*p�����þ���str��ֵ
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//��str�ĵ�ַ
//	strcpy(str, "hello world");
//	printf(str);//����ʼ��ַ��ʼ��ӡ��ֱ��'\0'
//
//	free(str);//�ͷ��ڴ�
//	str = NULL;
//}

//�����з���ֵ

//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//������ʹstrָ��̬������ڴ�ռ�
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

///**********************************End***************************************





/// @Problem   :       �ڴ�ռ� �������� 
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ��
/// 0.�ں˿ռ�(�û����벻�ܶ�д)
/// 1.ջ(��������)
/// 2.�ڴ�ӳ���(�ļ�ӳ�䡢��̬�⡢����ӳ��)
/// 3.��(��������)
/// 4.���ݶ�(ȫ�����ݡ���̬����)
/// 5.�����(��ִ�д��� / ֻ������)

/// @Codeing    :  
///**********************************Start*************************************          

///**********************************End***************************************





/// @Problem   :       �ṹ���е� �������� �� ָ����� ��ʹ�ö�̬�����ڴ�ʱ�Ĳ���
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ���ص㣺
/// 0.�ṹ�е����������Աǰ���������һ��������Ա
/// 1.sizeof ���ص����ֽṹ��С����������������ڴ�
/// 2.�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬����
/// 3.���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

/// �����ŵ㣺
/// 0. �����ڴ��ͷ�
/// 1. �����ڴ���߷����ٶȣ������ڴ���Ƭ

/// @Codeing    :  
///**********************************Start*************************************          

//typedef struct S1
//{
//	char c;
//	int i;
//	int arr[];
//}S1;
//
//typedef struct S2
//{
//	char c;
//	int i;
//	int* data;
//}S2;
//
////������������
//
//void test_flexible_arr()
//{
//	//���ٿռ䣬sizeof(S1)��������������Ĵ�С����
//	S1* ps1 = (S1*)malloc(sizeof(S1) + 20);
//	if (ps1 == NULL)
//	{
//		perror("malloc1");
//		return;
//	}
//	ps1->c = 'z';
//	ps1->i = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps1->arr[i] = i;
//	}
//	//��ӡ
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps1->arr[i]);
//	}
//	printf("\n");
//	//�ڴ治����������
//	S1* ptr = (S1*)realloc(ps1, sizeof(S1) + 40);
//	if (ptr != NULL)
//	{
//		ps1 = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps1->arr[i]);
//	}
//	printf("\n");
//	free(ps1);
//	ps1 = NULL;
//}
//
////����ָ�����
//
//void test_pointer_var()
//{
//	S2* ps2 = (S2*)malloc(sizeof(S2));
//	if (ps2 == NULL)
//	{
//		perror("malloc1");
//		return;
//	}
//	ps2->c = 'y';
//	ps2->i = 50;
//	ps2->data = (int*)malloc(20);//Ϊdataָ�뿪��20�ֽ�
//	if (ps2->data == NULL)
//	{
//		perror("malloc2");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps2->data[i] = i + 1;
//	}
//	//��ӡ
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps2->data[i]);
//	}
//	printf("\n");
//	//�ڴ治����������
//	int* pr = (int*)realloc(ps2->data, 40);
//	if (pr != NULL)
//	{
//		ps2->data = pr;
//	}
//	else
//	{
//		perror("realloc");
//		return;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps2->data[i]);
//	}
//
//	free(ps2->data);
//	ps2->data = NULL;
//	free(ps2);
//	ps2 = NULL;
//}
//
//
//int main()
//{
//	
//	test_flexible_arr();
//
//	test_pointer_var();
//
//	return 0;
//}

///**********************************End***************************************


////��mallocģ��ʵ��һ����ά����
//int main()
//{
//	int rows = 3;
//	int cols = 5;
//
//	//��������ռ�
//	int* data = (int*)malloc(rows * cols * sizeof(int));
//	if (data == NULL) {
//		perror("malloc fail");
//		free(data);
//		exit(-1);
//	}
//	//��ʼ������
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < cols; j++) {
//			data[i * cols + j] = i * cols + j;
//		}
//	}
//
//	//��ӡ��ά����
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			printf("%-3d", data[i * cols + j]);
//		}
//		printf("\n");
//	}
//
//	free(data);
//	data = NULL;
//
//	return 0;
//}


////ʹ���������֪ʶ��дһ�������жϵ�ǰ�����Ǵ�˻���С�ˣ������С�˷���1������Ǵ�˷���0.
//
//int isLittle()
//{
//	union MyUnion
//	{
//		unsigned int n;
//		unsigned char ch[4];
//	}test;
//	test.n = 0x01020304;
//	return test.ch[0] == 1 ? 0 : 1;
//}
//
//int main()
//{
//	printf("%d\n", isLittle());
//	return 0;
//}
