#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

//qsort �ײ�ʹ�õĿ�������
//void qsort( void* base, //���������ݵ���ʼ��ַ
//	        size_t num,   //���������ݵ�Ԫ�ظ���
//	        size_t size,  //���������ݵ�һ��Ԫ�صĴ�С����λ���ֽ�
//	        int (*compar)(const void*, const void*)//����ָ�� - ָ����һ���ȽϺ�������������������Ƚ�2��Ԫ�ص�
//          );
//

//
//Ŀ�꣺ʹ�á�ð�������ǵ��㷨��ģ��ʵ��һ�������������������������͵�����
//bubble_sort();


//void bubble_sort(int arr[], int sz)
//{
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//#include <string.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////int (*cmp)(const void* e1, const void* e2)
////e1��һ��ָ�룬�����һ��Ҫ�Ƚϵ�Ԫ�صĵ�ַ
////e2��һ��ָ�룬�����һ��Ҫ�Ƚϵ�Ԫ�صĵ�ַ
////e1ָ���Ԫ��>e2ָ���Ԫ�أ�����>0������
////e1ָ���Ԫ��==e2ָ���Ԫ�أ�����0
////e1ָ���Ԫ��<e2ָ���Ԫ�أ�����<0������
////
//
//void swap(char* buf1, char* buf2, size_t size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
////���ͱ��
//void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void*e2))
//{
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//if (arr[j] > arr[j + 1])
//			if(cmp((char*)base + j * size, (char*)base + (j + 1) * size)>0)
//			{
//				//����
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//����
//	//����Ϊ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}	
//
//struct Stu
//{
//	char name[20];//20
//	int age;//4
//};
//
//int cmp_stu_by_age(const void* e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 15}};
//	int sz = sizeof(arr) / sizeof(arr[0]);//3
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//��������/�ַ�����/�ṹ������...
//	//����ʹ��qsort���������ݽ�������
//	//����bubble_sort��������������
//	test1();
//
//	//����bubble_sort������ṹ�������
//	//test2();
//	return 0;
//}
//
//

//�����������
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)���������������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬&������ȡ����������ĵ�ַ
//

//
//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };//4��Ԫ�أ�ÿ��Ԫ��ʹint����(4���ֽ�)
//
//	printf("%d\n", sizeof(a));//16,������a��������sizeof�ڲ�����������ʾ�������飬���������������Ĵ�С��λ���ֽڣ���16�ֽ�
//	printf("%d\n", sizeof(a + 0));//a���ǵ�������sizeof�ڲ���Ҳû��&������������a��������Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
//	//�ǵ�ַ��С����4/8 Byte
//
//	printf("%d\n", sizeof(*a));//a���ǵ�������sizeof�ڲ���Ҳû��&,����������a��������Ԫ�صĵ�ַ
//	//*a ���� ��Ԫ�أ���С����4Byte  //*a == *(a+0) == a[0]
//
//	printf("%d\n", sizeof(a + 1));//a���ǵ�������sizeof�ڲ���Ҳû��&������������a��������Ԫ�صĵ�ַ,a+1���ǵڶ���Ԫ�صĵ�ַ
//	//a+1 == &a[1]  �ǵ�2��Ԫ�صĵ�ַ���ǵ�ַ����4/8���ֽ�
//
//	printf("%d\n", sizeof(a[1]));//a[1]��������ĵڶ���Ԫ�أ��������ľ��ǵڶ���Ԫ�صĴ�С����λ���ֽ� - 4
//
//	printf("%d\n", sizeof(&a));//&a - ��ȡ������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ���ǵ�ַ����4/8��Byte
//	//����ĵ�ַ �� ������Ԫ�صĵ�ַ �ı������������͵����𣬲��Ǵ�С������
//	//a  -- int*             int * p = a;
//	//&a -- int (*)[4]       int (*p)[4] = &a;
//	
//	printf("%d\n", sizeof(*&a));//16   ������ָ������÷���һ������Ĵ�С����λ���ֽ�
//	//sizeof(*&a) --- sizeof(a) //16
//
//	printf("%d\n", sizeof(&a + 1));//&a����ĵ�ַ��&a+1���ǵ�ַ���ǵ�ַ����4/8���ֽ�
//
//
//	printf("%d\n", sizeof(&a[0]));//&a[0]����Ԫ�صĵ�ַ�� ������ǵ�ַ�Ĵ�С 4/8 ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]����Ԫ�صĵ�ַ��&a[0]+1���ǵڶ���Ԫ�صĵ�ַ����С4/8���ֽ�
//	//&a[1]
//	//&a[0]+1
//	//a+1
//
//	return 0;
//}

//strlen ���ַ�������
//ͳ�Ƶ������ַ�����\0֮ǰ���ֵ��ַ��ĸ���
//
#include <string.h>
//
//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };//6
//
//	printf("%d\n", strlen(arr));//���ֵ��arr����Ԫ�صĵ�ַ
//	printf("%d\n", strlen(arr + 0));//���ֵ��arr����Ԫ�صĵ�ַ, arr+0������Ԫ�صĵ�ַ
//	//printf("%d\n", strlen(*arr));//err��arr����Ԫ�صĵ�ַ, *arr������Ԫ�� - 'a' - 97
//	//վ��strlen�ĽǶȣ���Ϊ���ν�ȥ��'a'-97���ǵ�ַ��97��Ϊ��ַ��ֱ�ӽ��з��ʣ����ǷǷ�����
//	//printf("%d\n", strlen(arr[1]));//err, 'b' - 98
//	printf("%d\n", strlen(&arr));//���ֵ
//	//&arr -- char (*)[6]
//	//const char*
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//
//	//printf("%d\n", sizeof(arr));//6 ������arr��������sizeof�ڲ������������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr + 0));//arr����Ԫ�صĵ�ַ==&arr[0]���ǵ�ַ����4/8���ֽ�
//	////char* 
//	////ָ������Ĵ�С�������޹أ�����ʲô���͵�ָ���������С����4/8���ֽ�
//	////ָ�������������ŵ�ַ�ģ���ַ�����Ҫ���ռ䣬ָ������Ĵ�С���Ǽ����ֽ�
//	////32λ�����£���ַ��32��������λ����Ҫ4���ֽڣ�����ָ������Ĵ�С����4���ֽ�
//	////64λ�����£���ַ��64��������λ����Ҫ8���ֽڣ�����ָ������Ĵ�С����8���ֽ�
//	////�ŷ��￴ָ�룬��ָ���������
//	////
//	//printf("%d\n", sizeof(*arr));//arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���С����1Byte
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ��sizeof(&arr)����4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));//&arr+1 �����������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ���ǵ�ַ����4/8Byte
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	//a b c d e f \0
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}

//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//
//
//	//printf("%d\n", sizeof(p));//4/8 �������ָ������Ĵ�С
//	//printf("%d\n", sizeof(p + 1));//p+1���ǵ�ַ����С��4/8���ֽ�
//	//printf("%d\n", sizeof(*p));//1���ֽ�, *p == 'a'
//	//printf("%d\n", sizeof(p[0]));//1���ֽ�, p[0]--> *(p+0) --> *p == 'a';
//
// //	printf("%d\n", sizeof(&p));//4/8���ֽڣ�&p �ǵ�ַ
//	//printf("%d\n", sizeof(&p + 1));//&p�ǵ�ַ��&p+1���ǵ�ַ���ǵ�ַ����4/8���ֽ�
//
//	//printf("%d\n", sizeof(&p[0] + 1));
//
//
//
//	return 0;
//}