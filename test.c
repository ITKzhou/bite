#define _CRT_SECURE_NO_WARNINGS 1

//2�������ڴ�ķ�ʽ

//int main()
//{
//	int a = 10;//���һ��ֵ
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//���һ����
//
//	return 0;
//}

//C���Ը�����Աһ��Ȩ�����ܹ���̬����͹����ڴ�ռ�


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//
//int main()
//{
//	//����һ��ռ䣬�������10������
//	//int* p = (int*)malloc(INT_MAX*4);
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//free
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//calloc Ҳ�����������ڴ�ռ�

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//�ռ䲻����ϣ�������ռ�Ϊ20�����͵Ŀռ�
//	int* ptr = (int*)realloc(p, 2000*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//...
//	
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//

//int main()
//{
//	int*p = (int*)realloc(NULL, 40);//== malloc(40);
//	if (p == NULL)
//	{
//
//	}
//	return 0;
//}

//��NULLָ��Ľ����ò���
//int main()
//{
//	int *p = (int*)malloc(40);
//	//��������ֵ�жϣ��Ϳ���ʹ��NULLָ�룬������
//	if (p == NULL)
//	{
//
//	}
//	*p = 20;
//
//	return 0;
//}

// �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int i = 0;
//	//Խ����
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	//��ӡ
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//0 1 2 3 4 0 0 0 0 0 
//	
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//��ͬһ�鶯̬�ڴ����ͷ�

//int main()
//{
//	int* p = malloc(40);
//	if (p == NULL)
//	{
//		//....
//		return 1;
//	}
//	//....
//	
//	//�ͷ�
//	free(p);
//	p = NULL;
//	//...
//
//	free(p);
//
//	return 0;
//}

//��̬�����ڴ������ͷţ��ڴ�й©��

//void test()
//{
//	int* p = (int*)malloc(40);
//	//...
//	if (3)
//		return;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//...
//	while (1)
//	{
//		;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int* p = (int*)malloc(40);
//	//...
//	if (3)
//		return p;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	int* ret = test();
//	free(ret);
//	ret = NULL;
//	//...
//	while (1)
//	{
//		;
//	}
//
//	return 0;
//}

