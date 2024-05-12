#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体传参。结构体名并不是指针！！！

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
//	strcpy(ps->name, "zhangsan");//字符串拷贝
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
//	//写一个函数给s中存放数据
//	set_s(&s);
//
//	//写一个函数打印s中的数据
//	print_s(&s);
//
//	return 0;
//}




/// @Problem   :       结构体     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：结构体定义，读写操作，自引用，匿名结构体
///0. 
///1. 

///二：offsetof (type,member)
///0. 返回类型中成员变量以类型变量开始位置的偏移值（以字节为单位）
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
//}s1 = { "zhangsan",20,90.0 }, s2;//全局变量
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
//	struct Node* next;//自引用
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
//	struct Node n1 = { .data=200 };//部分初始化
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




