#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������������Ҫ���ܴ�������������������ʹ��

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//����һ�������Ķ�������Ϊ1�ĸ���

//int Count_bit_one(unsigned int n)//10:1010
//{
//	int count = 0;
//	//ģ2��2��
//	/*while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}*/
//
//	//���������λ
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}*/
//
//	//n & (n - 1)
//	while (n)//1010 & 1001 = 1000,1000 & 0111 = 0000
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Count_bit_one(n);
//	printf("%u\n", ret);
//	return 0;
//}

//�ж�һ�����Ƿ���2�Ĵη���

//void Is_2_Power(int n)//0100 & 0011 =0 
//{
//	if ((n & (n - 1)) == 0)
//	{
//		printf("%d��2�Ĵη���\n", n);
//	}
//	else
//	{
//		printf("%d����2�Ĵη���\n", n);
//	}
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Is_2_Power(num);
//
//	return 0;
//}

//ָ����iλ����������λ��0����1

//int Replace(int n,int i,int flag)
//{
//	//��1
//	if (flag)
//	{
//		n |= (1 << (i - 1));
//		return n;
//	}
//	else
//	{
//		n &= (~(1 << (i - 1)));
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d %d", &num, &i);
//	printf("%d\n", Replace(num, i, 1));//10 5 1 >>>26
//	printf("%d\n", Replace(num, i, 0));//10 5 0 >>>10
//	return 0;
//}

//��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε�����
//���磺1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
//	int temp = arr[0];
//	int i = 0;
//	for (i = 1; i < 9; i++)
//	{
//		temp ^= arr[i];
//	}
//	printf("%d", temp);
//	return 0;
//}

//��ӡ���������Ƶ�����λ��ż��λ
//void Show_bit_sequence(int n, int flag)//00000000 00000000 00000000 00001110
//{                                      //0 0 0 0  0 0 0 0  0 0 0 0  0 0 1 1 
//	                                   // 0 0 0 0  0 0 0 0  0 0 0 0  0 0 1 0
//	//odd
//	int i = 0;
//	if (flag)
//	{
//		for (i = 31; i > 0; i -= 2)
//		{
//			printf("%d ", (n >> i) & 1);
//		}
//		printf("\n");
//	}
//	//even
//	else
//	{
//		for (i = 30; i >= 0; i -= 2)
//		{
//			printf("%d ", (n >> i) & 1);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Show_bit_sequence(num, 1);
//	Show_bit_sequence(num, 0);
//	return 0;
//}


//a�渺�����Բ�����ʽ��ʵ����һ���ܴ����
// int��������x86����x64����4Bety
//int i;
//int main()
//{
//    i--;
//    //printf("%d", i);
//    printf("%d", sizeof(i));
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
