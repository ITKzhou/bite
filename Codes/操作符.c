#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//交换两个数，要求不能创建第三个变量，异或的使用

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//计算一个整数的二进制中为1的个数

//int Count_bit_one(unsigned int n)//10:1010
//{
//	int count = 0;
//	//模2除2法
//	/*while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}*/
//
//	//右移至最低位
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

//判断一个数是否是2的次方数

//void Is_2_Power(int n)//0100 & 0011 =0 
//{
//	if ((n & (n - 1)) == 0)
//	{
//		printf("%d是2的次方数\n", n);
//	}
//	else
//	{
//		printf("%d不是2的次方数\n", n);
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

//指定第i位二进制序列位置0或置1

//int Replace(int n,int i,int flag)
//{
//	//置1
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

//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字
//例如：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5
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

//打印整数二进制的奇数位和偶数位
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


//a存负数，以补码形式，实际是一个很大的数
// int型无论是x86还是x64总是4Bety
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
