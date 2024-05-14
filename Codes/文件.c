#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/// @Problem   :         打开文件   读写文件    关闭文件
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：
/// 0. FILE * fopen ( const char * filename, const char * mode );
/// 1. int fclose ( FILE * stream );

/// 二：
/// 0. 字符输入函数	int fgetc ( FILE * stream );
/// 1.字符输出函数	int fputc ( int character, FILE * stream );
/// 2.文本行输入函数	char * fgets ( char * str, int num, FILE * stream );
/// 3.文本行输出函数	int fputs ( const char * str, FILE * stream );
/// 4.格式化输入函数	int fscanf ( FILE * stream, const char * format, ... );
/// 5.格式化输出函数	int fprintf ( FILE * stream, const char * format, ... );
/// 6.二进制输入		size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
/// 7.二进制输出		size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
///	8.格式形式转为字符串		int sscanf ( const char * s, const char * format, ...);
///							int sprintf ( char * str, const char * format, ... );


/// @Codeing    :  
///**********************************Start*************************************          

//测试fputc()  fgetc()

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);//输出到文件pf流中
//		//fputc(i, stdout);//输出到标准输出流中
//	}
//
//	//读文件
//	//int ch;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	printf("%c", ch);
//	//	//fputc(ch, stdout);//输出到标准输出流中
//	//}
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//测试fputs()   fgets()

//int main()
//{
//	FILE* pf = fopen("data.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputs("Hello", pf);
//
//	//读文件
//	char arr[100] = { 0 };
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//测试fprintf()   fscanf()

//typedef struct Student
//{
//	char id;
//	int n;
//	float s;
//}Stu;
//
//int main()
//{
//	Stu s = { '1',12,11.0f };
//	FILE* pf = fopen("data.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fprintf(pf, "%c,%d,%f", s.id, s.n, s.s);
//	//printf("%c,%d,%f\n", s.id, s.n, s.s);
//
//	//读文件
//	fscanf(pf, "%c,%d,%f", &(s.id), &(s.n), &(s.s));
//	printf("%c,%d,%f\n", s.id, s.n, s.s);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//测试fread()   fwrite()

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fwrite(arr1, sizeof(arr1[0]), sizeof(arr1) / sizeof(arr1[0]),pf);
//
//	//读文件
//	fread(arr2, sizeof(arr2[0]), sizeof(arr2) / sizeof(arr2[0]), pf);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//测试sscanf()   sprintf()

//struct S
//{
//	float f;
//	char c;
//	int n;
//};
//
//int main()
//{
//	struct S s = { 3.14f, 'c', 100 };
//	char arr[100] = { 0 };
//	sprintf(arr, "%f-%c-%d", s.f, s.c, s.n);
//	printf("%s\n", arr);
//
//	struct S tmp = { 0 };
//	sscanf(arr, "%f-%c-%d", &(tmp.f), &(tmp.c), &(tmp.n));
//	printf("%f\n", tmp.f);
//	printf("%c\n", tmp.c);
//	printf("%d\n", tmp.n);
//
//	return 0;
//}


///**********************************End***************************************






/// @Problem   :        文件的随机读写 fseek()  ftell()   rewind()   
///————————————————————————————————————————————————————————————————————————————            
/// @Solution  : 
/// 一：int fseek ( FILE * stream, long int offset, int origin );
/// 0. SEEK_SET
/// 1. SEEK_CUR
/// 2. SEEK_END
/// 二：long int ftell ( FILE * stream );
/// 0. 
/// 1. 
/// 三：void rewind ( FILE * stream );
/// 0. 将与流关联的位置指示器设置为文件的开头

/// @Codeing    :  
///**********************************Start*************************************          

//int main()
//{
//    int n;
//    FILE* pFile;
//    char buffer[27];
//
//    pFile = fopen("data.txt", "w+");
//    for (n = 'A'; n <= 'Z'; n++)
//        fputc(n, pFile);
//    rewind(pFile);
//    fread(buffer, 1, 26, pFile);
//    fclose(pFile);
//    buffer[26] = '\0';
//    puts(buffer);
//    return 0;
//}

///**********************************End***************************************








