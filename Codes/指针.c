#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ�����������ַ����ĳ���
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








