#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ģ��strlen�⺯��
//0.������


#include <assert.h>

//size_t My_strlen(char const* p)
//{
//	size_t count = 0;
//	assert(p != NULL);
//	//*p = 'w';
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//1.ָ��-ָ��
//size_t My_strlen(const char* str)
//{
//	const char* eos = str;
//	while (*eos++);
//	return(eos - str - 1);
//}
//
//int main()
//{
//	char ch[] = { "abcdef" };//6
//	size_t sz = My_strlen(&ch[0]);
//	printf("%zd\n",sz);
//	return 0;
//}


//дһ��������������������ֵ

//void Swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//�ַ�������

//#include <string.h>
//
//void Reverse_order(char* str) {
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main() {
//    char str[10000] = { 0 };
//    while (gets(str)) {
//        Reverse_order(str);
//        printf("%s\n", str);
//    }
//    return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//#include <string.h>
//
//void reverse_part(char* str, int start, int end)
//{
//	int temp = 0;
//	for (int i = start, j = end; i < j; i++, j--)
//	{
//		temp = str[i];
//		str[i] = str[j];
//		str[j] = temp;
//	}
//}
//
//
//LeftRotateString(char* str, int time)
//{
//	int len = strlen(str);
//	int pos = time % len;
//	reverse_part(str, 0, pos - 1);//��ת��벿��
//	reverse_part(str, pos, len - 1);//��תʣ��벿��
//	reverse_part(str, 0, len - 1);//��ת�����ַ���
//}
//
//int main()
//{
//	char str[] = { "ABCDEF"};
//	int n = 0;
//	scanf("%d", &n);
//	LeftRotateString(str, n);
//	printf("%s\n",str );
//	return 0;
//}


//��������ż��˳��
//��������ʹ����ȫ����λ��ż��ǰ��


//void Swap(int str[], int sz)
//{
//	int left = 0;//��ͷ������ż��
//	int right = sz - 1;//��β����������
//	while (left < right)
//	{
//		//��������������һλ��ֱ���ҵ�һ��ż��ͣ��
//		while ((left < right) && (str[left] % 2 == 1))
//		{
//			left++;
//		}
//		//��ż������ǰ��һλ��ֱ���ҵ�һ������ͣ��
//		while ((left < right) && (str[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
//		if (left < right)
//		{
//			int temp = 0;
//			temp = str[left];
//			str[left] = str[right];
//			str[right] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Swap(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


//ָ��ģ��һά����

//void Input(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Input(arr, sz);
//
//	Print(arr, sz);
//
//	return 0;
//}

//ָ�����飬ģ��һ����ά����


//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 3,4,5,6 };
//	int arr3[] = { 5,6,7,8 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ģ��strcopy�⺯��

//#include <assert.h>
//
//char* my_strcopy(char* desti, const char* source)//const���Σ�*source����д��
//{
//	char* ret = desti;
//	assert(desti);//���ԣ����ʽ�ǿվ����������򱨴�
//	assert(source);
//
//	while (*desti++ = *source++)
//	{
//		;
//	}
//	return ret;//���Է���ָ��
//}
//
//int main()
//{
//	char str1[] = { "xxxxxxxxxxxxx" };
//	char str2[] = { "hello bite" };
//	printf("%s\n", my_strcopy(str1, str2));
//	return 0;
//}


//ģ��strlen�⺯��

//#include <assert.h>
//
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t ret = my_strlen(arr);
//	printf("%zd\n", ret);
//	return 0;
//}


//ð��������Ϥ���鴫��


//void Input(int* prr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", prr + i);
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int count = 0;
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//sz-1��Ԫ��Ҫ������10��Ԫ�أ�ֻ��Ҫ��ǰ9��
//	{
//		int flag = 1;//��ʼ����޽�����һ���н�������0
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//ÿһ��Ԫ�رȽϵ�������������һ�����ٱȽ�һ��
//		{
//			count++;
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//0.���뺯��
//	Input(arr, sz);
//
//	//1.�������
//	//Print(arr, sz);
//
//	//2.����
//	bubble_sort(arr, sz);
//
//	Print(arr, sz);
//	printf("count=%d\n", count);
//
//	return 0;
//}

//��ָ������ģ���ά����

//void Input(int* arr[], int sz, int sz_n)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz_n; j++)
//		{
//			//scanf("%d", &arr[i][j]);
//			scanf("%d", *(arr+i)+j);
//		}
//	}
//}
//
//void Print(int* arr[],int sz,int sz_n)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz_n; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr1[4] = { 0 };
//	int arr2[4] = { 0 };
//	int arr3[4] = { 0 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//
//	int sz_n = sizeof(arr1) / sizeof(arr1[0]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//д��
//	Input(arr, sz, sz_n);
//	
//	//����
//	Print(arr, sz, sz_n);
//
//	return 0;
//}



//����ָ��


//int main()
//{
//	int arr1[4] = { 0 };
//	int arr2[4] = { 0 };
//	int arr3[4] = { 0 };
//
//	char* ch1 = "abcdef";
//	char* ch2[5];
//
//	int* arr[] = { arr1,arr2,arr3 };
//
//	int(*prn)[4] = &arr1;
//
//	int* (*pr)[3] = &arr;
//
//	char* (*pc1) = &ch1;
//	char* (*pc2)[5] = &ch2;
//
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.


//#include <string.h>
//
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}
//
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//
//	char s3[] = "abcd";
//	char s4[] = "ABCD";
//
//	printf("%d\n", findRound(s1, s2));
//	printf("%d\n", findRound(s3, s4));
//
//	return 0;
//}






