#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ�崫�Ρ��ṹ����������ָ�룡����

//#include <string.h>
//#include <assert.h>
//
//typedef struct Student
//{
//	char name[20];
//	int age;
//}Stu;
//
//
//void set_s(Stu* ps)
//{
//	assert(ps);
//	ps->age = 18;
//	strcpy(ps->name, "zhangsan");//�ַ�������
//}
//
//void print_s(Stu* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	Stu s = {0};
//	//дһ��������s�д������
//	set_s(&s);
//
//	//дһ��������ӡs�е�����
//	print_s(&s);
//
//	return 0;
//}




/// @Problem   :       �ṹ��     
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
///һ���ṹ�嶨�壬��д�����������ã������ṹ��
///0. 
///1. 

///����offsetof (type,member)
///0. ���������г�Ա���������ͱ�����ʼλ�õ�ƫ��ֵ�����ֽ�Ϊ��λ��
///1. 

///@Codeing    :  
///**********************************Start*************************************          

//#include <stddef.h> 
//
//struct Student
//{
//	char name[20];
//	int age;
//	double sorce;
//}s1 = { "zhangsan",20,90.0 }, s2;//ȫ�ֱ���
//
//struct Piant
//{
//	int x;
//	int y;
//}p0 = { 1,2 };
//
//struct Node
//{
//	int data;
//	struct Piant p1;
//	struct Node* next;//������
//}n0 = { 100,{3,4},NULL };
//
//struct foo {
//	char a;
//	char b[10];
//	char c;
//};
//
//int main()
//{
//	struct Student s3 = { "lisi",21,89.0 };
//	struct Node n1 = { .data=200 };//���ֳ�ʼ��
//	printf("%s,%d,%lf\n", s3.name, s3.age, s3.sorce);
//	printf("%d,%d,%d,%p\n", n1.data, n0.p1.x, n0.p1.y, n1.next);
//
//	printf("offsetof(struct foo,a) is %d\n", (int)offsetof(struct foo, a));
//	printf("offsetof(struct foo,b) is %d\n", (int)offsetof(struct foo, b));
//	printf("offsetof(struct foo,c) is %d\n", (int)offsetof(struct foo, c));
//
//	return 0;
//}

///**********************************End***************************************




