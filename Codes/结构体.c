#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



/// @Problem   :       结构体传参,结构体名并不是指针  
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 
///1. 
///
///@Codeing    :  
///**********************************Start*************************************          

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

///**********************************End***************************************



/// @Problem   :       结构体     结构体内存对齐
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：结构体定义，读写操作，自引用，匿名结构体
///0. #include <stddef.h>
///1. 

///二：offsetof (type,member)
///0. 返回类型中成员变量以类型变量开始位置0的偏移值（以字节为单位）
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



/// @Problem   :         计算结构体的大小
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：对齐数，默认：8
///0. 设置默认对齐数为1 ：#pragma pack(1)   +代码块+   #pragma pack()  
///1. 

///二：
///0. 对齐数 = 编译器默认的一个对齐数（8）与该成员大小的较小值
///1. 结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍

///@Codeing    :  
///**********************************Start*************************************          

//struct S1
//{
//	char c1;//8 1  >> 编号:0
//	char c2;//8 1  >> 编号:1    >> 编号:2,3空闲
//	int i;  //8 4   >> 编号:4,5,6,7  一共占8个字节，最大对齐数4的倍数：8
//}s1;
//
//struct S2
//{
//	char c1;// 8 1  >> 编号:0  >> 编号:1,2,3空闲
//	int i;  // 8 4  >> 编号:4,5,6,7
//	char c2;// 8 1  >> 编号:8        一共占9个字节，最大对齐数4的倍数：12
//};
//
//struct S3
//{
//	double d;// 8 8  >> 编号:0,1,2,3,4,5,6,7
//	char c;  // 8 1  >> 编号:8    >> 编号:9,10,11 空闲
//	int i;   // 8 4  >> 编号:12,13,14,15
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//8
//	printf("%d\n", sizeof(struct S2));//12
//	printf("%d\n", sizeof(struct S3));//
//	printf("%d\n", sizeof(struct S4));
//
//	return 0;
//}

///**********************************End***************************************




/// @Problem   :       位段  ：创建结构体变量节省内存空间
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：网络中传输数据，帧格式
///0. 
///1. 

///@Codeing    :  从地位到高位用，位数不够就重新开辟字节
///**********************************Start*************************************          

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

///**********************************End***************************************





/// @Problem   :        枚举
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：常量
///0. 字母常量
///1. #define定义的标识符常量 
///2. const修饰的常变量
///3. 枚举常量 

///二：enum
///0. 成员常量也是有值的，默认从0开始，定义时也可修改，一旦修改，后面的值就依次增大
///1. 定义的常量是有类型大小的，4B
/// 2.宏的特点：查找替换，不计算表达式的值。 若A=2，B=3，则sz=MAX*4=2+3*4=14 

///@Codeing    :  与#define MAX A+B    
///**********************************Start*************************************          

//#define MAX 10
//
//enum Sex
//{
//	//枚举的可能取值
//	MALE,//枚举常量
//	FEMALE=4,
//	SECRET
//};
//
//int main()
//{
//	//MALE = 5;//ERR
//	printf("%d\n", MALE);//0
// printf("%d\n", FEMALE);//4
// printf("%d\n", SECRET);//5
//	printf("%d\n", MAX);
//	enum Sex sex = SECRET;
//	printf("%zd\n", sizeof(sex));
//
//	return 0;
//}

///**********************************End***************************************





/// @Problem   :    联合体 union      
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
///一：
///0. 成员共用同一块内存空间,成员变量的地址和类型名的地址一样
///1. 

///二：联合体的大小
///0. 最大成员的大小 >>> 要对齐到最大对齐数（8）的整数倍
///1. 

///@Codeing    :  使用联合体，判断当前机器是大端存储还是小端存储
///**********************************Start*************************************  

//int check_system()
//{
//	//匿名联合体类型，变量只能使用一次
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	if (check_system())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

///@Codeing    :  使用联合体设计商品
///**********************************Start*************************************         
//图书 : 书名、作者、页数
//杯子 : 设计
//衬衫 : 设计、可选颜色、可选尺寸

//struct gift_list
//{
//
//	int stock_number;//库存量
//	double price;//定价
//	int item_type;//商品类型
//	union
//	{
//		struct
//		{
//			char title[20];//书名
//			char author[20];//作者
//			int num_pages;//页数
//		}book;
//		struct
//		{
//			char design[30];//设计
//		}mug;
//		struct
//		{
//			char design[30];//设计
//			int colors;//颜色
//			int sizes;//尺寸
//		}shirt;
//	}item;
//};

///**********************************End***************************************






