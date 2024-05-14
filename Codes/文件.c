#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


/// @Problem   :         ���ļ�   ��д�ļ�    �ر��ļ�
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ��
/// 0. FILE * fopen ( const char * filename, const char * mode );
/// 1. int fclose ( FILE * stream );

/// ����
/// 0. �ַ����뺯��	int fgetc ( FILE * stream );
/// 1.�ַ��������	int fputc ( int character, FILE * stream );
/// 2.�ı������뺯��	char * fgets ( char * str, int num, FILE * stream );
/// 3.�ı����������	int fputs ( const char * str, FILE * stream );
/// 4.��ʽ�����뺯��	int fscanf ( FILE * stream, const char * format, ... );
/// 5.��ʽ���������	int fprintf ( FILE * stream, const char * format, ... );
/// 6.����������		size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
/// 7.���������		size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
///	8.��ʽ��ʽתΪ�ַ���		int sscanf ( const char * s, const char * format, ...);
///							int sprintf ( char * str, const char * format, ... );


/// @Codeing    :  
///**********************************Start*************************************          

//����fputc()  fgetc()

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);//������ļ�pf����
//		//fputc(i, stdout);//�������׼�������
//	}
//
//	//���ļ�
//	//int ch;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	printf("%c", ch);
//	//	//fputc(ch, stdout);//�������׼�������
//	//}
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//����fputs()   fgets()

//int main()
//{
//	FILE* pf = fopen("data.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//fputs("Hello", pf);
//
//	//���ļ�
//	char arr[100] = { 0 };
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//����fprintf()   fscanf()

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
//	//д�ļ�
//	//fprintf(pf, "%c,%d,%f", s.id, s.n, s.s);
//	//printf("%c,%d,%f\n", s.id, s.n, s.s);
//
//	//���ļ�
//	fscanf(pf, "%c,%d,%f", &(s.id), &(s.n), &(s.s));
//	printf("%c,%d,%f\n", s.id, s.n, s.s);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//����fread()   fwrite()

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
//	//д�ļ�
//	//fwrite(arr1, sizeof(arr1[0]), sizeof(arr1) / sizeof(arr1[0]),pf);
//
//	//���ļ�
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

//����sscanf()   sprintf()

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






/// @Problem   :        �ļ��������д fseek()  ftell()   rewind()   
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ��int fseek ( FILE * stream, long int offset, int origin );
/// 0. SEEK_SET
/// 1. SEEK_CUR
/// 2. SEEK_END
/// ����long int ftell ( FILE * stream );
/// 0. 
/// 1. 
/// ����void rewind ( FILE * stream );
/// 0. ������������λ��ָʾ������Ϊ�ļ��Ŀ�ͷ

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



/// @Problem   :  fgetc()  fgets()  fread()   �ж϶�ȡ�ļ�����   feof() ferror()  
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
/// @Solution  : 
/// һ��
/// fgetc�ж��Ƿ�Ϊ EOF.
/// fgets �жϷ���ֵ�Ƿ�Ϊ NULL.
/// fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
 

/// ����
/// ferror -���ļ���ȡ�����������ж��ļ��Ƿ���Ϊ��ȡ�������������������!
/// feof - ���ļ���ȡ�����������ж��ļ��Ƿ���Ϊ��ȡ�����������ļ�������־������!
/// 1. 

/// @Codeing    :  
///**********************************Start*************************************          

//дһ����������ļ��Ŀ���   data1.txt("r") ---> data2.txt("w")
 
//int main()
//{
//	FILE* pfread = fopen("data1.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("pfread->fopen");
//		return 1;
//	}
//	FILE* pfwrite = fopen("data2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("pfwrite->fopen");
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//�����ļ�
//	int ch = 0;
//	while (ch = fgetc(pfread) != EOF)
//	{
//		fputc(ch, pfwrite);//�ַ�һ����ASCII����ʽ�洢���ļ���
//	}
//
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}

//ʹ��fread()����feof(),ferror()

//enum { SIZE = 10 };
//
//int main()
//{
//	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
//	FILE* pf = fopen("test1.txt", "wb");//��������������ݴ��ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д���ݵ��ļ�
//	fwrite(a, sizeof * a, SIZE, pf);//д�ļ�
//	fclose(pf);
//	//���ļ���ȡ����
//	int b[SIZE] = { 0 };
//	pf = fopen("test1.txt", "rb");//��������������ݴ��ļ�
//	int ret_fread = fread(b, sizeof * b, SIZE, pf);//���ļ�
//	if (ret_fread == SIZE)//fread()����ֵ��Ҫ��ȡ������ȣ���ʾ�ɹ���ȡû�д���
//	{
//		puts("��ȡtest1.txt�ɹ�");
//		int i = 0;
//		for (i = 0; i < SIZE; i++)
//		{
//			printf("%d ", b[i]);//��ӡ���뻺����������
//		}
//		putchar('\n');
//	}
//	
//	//��ȡ�����ж�
//	else
//	{
//		if (feof(pf))
//		{
//			puts("��ȡtest1.txt���ļ���ĩβ\n");
//		}
//		else if (ferror(pf))
//		{
//			perror("��ȡtest1.txt�ļ������г��ִ���");
//		}
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

///**********************************End***************************************






