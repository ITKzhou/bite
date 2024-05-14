#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>





/// @Problem   :    预处理     
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：预定义符号
/// __FILE__	进行编译的源文件
/// __LINE__	文件当前的行号
/// __DATE__	文件被编译的日期
/// __TIME__	文件被编译的时间
/// __STDC__	如果编译器遵循ANSIC，其值为1，否则未定义
/// __FUNCTION__正编译的函数

/// 二：定义宏
/// 允许定义宏的名字有参数，并且参数可以替换大文本
/// 定义宏时，不能出现递归
/// 

/// 三: 预处理操作符  #与##
/// 十进制数100，printf("%#o,%#x");输出是八进制数0144，十六进制数0x64
/// 使用#，把一个宏参数变成对应的字符串
/// ##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符。
/// 这样的连接必须产生一个合法的标识符。否则其结果就是未定义的。


/// @Codeing    :  
///**********************************Start*************************************          

//预定义符号

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//	//printf("%d\n", __STDC__);//当前使用是的VS2022不遵循ANSI C
//	return 0;
//}


//#define forever for(;;)//宏定义，一个死循环


//printf("hello" " world\n");//printf()函数中参数可以是多个连续的字符串


//使用#，把一个宏参数变成对应的字符串

//#define PRINT(n, format)   printf("the value of "#n" is "format"\n", n)
//
//int main()
//{
//	int a = 10;
//	PRINT(a, "%d");
//	//printf("the value of ""a"" is ""%d""\n", a);
//	return 0;
//}

//##可以把位于它两边的符号合成一个符号

//#define CAT(v, n) v##n
//
//int main()
//{
//	int value10 = 100;
//	printf("%d\n", CAT(value, 10));
//	printf("%d\n", value10);
//
//	return 0;
//}


///**********************************End***************************************








