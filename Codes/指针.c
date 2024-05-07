#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//模拟strlen库函数
//0.计数法


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

//1.指针-指针
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


//写一个函数，交换两个数的值

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
//	printf("交换前：a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//字符串逆序

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

//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

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
//	reverse_part(str, 0, pos - 1);//旋转左半部分
//	reverse_part(str, pos, len - 1);//旋转剩余半部分
//	reverse_part(str, 0, len - 1);//旋转整个字符串
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


//调整奇数偶数顺序
//调整数组使奇数全部都位于偶数前面


//void Swap(int str[], int sz)
//{
//	int left = 0;//从头向右找偶数
//	int right = sz - 1;//从尾向左找奇数
//	while (left < right)
//	{
//		//是奇数就往后移一位，直到找到一个偶数停下
//		while ((left < right) && (str[left] % 2 == 1))
//		{
//			left++;
//		}
//		//是偶数就往前移一位，直到找到一个奇数停下
//		while ((left < right) && (str[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
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


//指针模拟一维数组

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

//指针数组，模拟一个二维数组


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


//模拟strcopy库函数

//#include <assert.h>
//
//char* my_strcopy(char* desti, const char* source)//const修饰，*source不能写入
//{
//	char* ret = desti;
//	assert(desti);//断言，表达式非空就正常，否则报错
//	assert(source);
//
//	while (*desti++ = *source++)
//	{
//		;
//	}
//	return ret;//可以返回指针
//}
//
//int main()
//{
//	char str1[] = { "xxxxxxxxxxxxx" };
//	char str2[] = { "hello bite" };
//	printf("%s\n", my_strcopy(str1, str2));
//	return 0;
//}


//模拟strlen库函数

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


//冒泡排序，熟悉数组传参


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
//	for (i = 0; i < sz - 1; i++)//sz-1个元素要排序，如10个元素，只需要排前9个
//	{
//		int flag = 1;//初始标记无交换，一旦有交换就置0
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每一个元素比较的趟数，排序了一个就少比较一趟
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
//	//0.输入函数
//	Input(arr, sz);
//
//	//1.输出函数
//	//Print(arr, sz);
//
//	//2.排序
//	bubble_sort(arr, sz);
//
//	Print(arr, sz);
//	printf("count=%d\n", count);
//
//	return 0;
//}

//用指针数组模拟二维数组

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
//	//写入
//	Input(arr, sz, sz_n);
//	
//	//读出
//	Print(arr, sz, sz_n);
//
//	return 0;
//}



//数组指针


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


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.


//#include <string.h>
//
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
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






