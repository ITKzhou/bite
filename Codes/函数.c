#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����ĳ��ĳ���ж����죿

//#include <stdbool.h>
//
////��������
//int get_days(int, int);
//bool is_leap_year(int);
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	printf("%d", get_days(year,month));
//	return 0;
//}
//
////�õ�����
//int get_days(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//�ж�������
//	if (is_leap_year(y) && m == 2)
//	{
//		return ++days[m];
//	}
//	else
//		return days[m];
//}
////�ж������꺯��
//bool is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}

//дһ�����ֲ��Һ���
//��һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.

//int bin_search(int[], int, int, int);
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;//����keyֵ
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("��������Ҫ���ҵ�ֵ��\n");
//	scanf("%d", &key);
//	printf("%d", bin_search(arr, left, right, key));
//	return 0;
//}
//
//int bin_search(int arr[], int left, int right, int key) {
//	
//	int flag = 0;//�������ѭ�����ǲ����ҵ����ҵ�����1
//
//	//���ֲ���
//	//0.���ҵ�
//	while (left <= right)
//	{
//		//�����м��±�
//		int mid = left + (right - left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;//�ҵ���1
//			return mid;
//		}
//	}
//	//1.�����ҵ�
//	if (!flag)
//	{
//		return -1;
//	}
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//void print_mult_table(int n);
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_mult_table(num);
//	return 0;
//}
//
//void print_mult_table(int n) {
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}


////�ж������꺯�� 

//#include <stdbool.h>
//
//bool is_leap_year(int);
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d�����꣡\n",year);
//	}
//	else
//	{
//		printf("%d�������꣡\n",year);
//	}
//	return 0;
//}
//
//bool is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}


//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

//#define N 100
//#include <stdbool.h>
//#include <math.h>
//
//bool is_prime(int);
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = N; i <= 200; i++) 
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//bool is_prime(int num) 
//{
//	int flag = 1;//���������������
//	for (int j = 2; j <= sqrt(num); j++)
//	{
//		if (num % j == 0)
//		{
//			flag = 0;
//			return false;
//		}
//	}
//	if (flag == 1)
//	{
//		return true;
//	}
//}


//����һ���������飬��ɶ�����Ĳ���:
//0.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//1.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//2.ʵ��reverse()  �����������Ԫ�ص����á�

//void init(int arr[], int lenth);
//void print(int arr[], int lenth);
//void reverse(int arr[], int lenth);
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr,sz);
//	init(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//
//void init(int arr[], int lenth)
//{
//	for (int i = 0; i < lenth; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int lenth)
//{
//	for (int i = 0; i < lenth; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////����һά����
//void reverse(int arr[], int lenth)
//{
//	int left = 0;
//	int right =	lenth-1;
//	while (left < right)
//	{
//		int temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}

//˳���ӡ һ������ÿһλ

//void Print(int n);
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//������̨������
//�ݹ����n��쳲�������

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}

// ������쳲���������

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;	
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}



//�ݹ�ʵ��n��k�η�

//int power(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return  n * power(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int r = power(n, k);
//	printf("%d\n", r);
//	return 0;
//}


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

//int DigitSum(int n)//12
//{
//	
//	if (n < 10)
//	{
//		return n % 10;
//	}
//	return n % 10 + DigitSum(n / 10);//2+DigitSum(1)
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = DigitSum(n);
//	printf("%d\n", r);
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//int Factorial(int n)
//{
//	int r = 1;
//	while (n > 1)
//	{
//		r *= n;
//		n--;
//	}
//	return r;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Factorial(n);
//	printf("%d\n", r);
//	return 0;
//}

//int Factorial(int n)//3
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * Factorial(n - 1);//3*F(2)>>>2*F(1)>>1*F(0)
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Factorial(n));
//	return 0;
//}


//��ŵ������

//void move(char pos1, char pos3)
//{
//	printf(" %c->%c ",pos1,pos3);
//}
//
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//
//int main()
//{
//
//	Hanoi(1, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(2, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(3, 'A', 'B', 'C');
//	printf("\n");
//	return 0;
//}





