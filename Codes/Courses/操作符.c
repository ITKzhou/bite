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


//signed与unsigned

//int main()
//{
//	int a = -10;//默认是signed
//	unsigned int b = -10;//a,b存储内存都是-10的补码
//
//	printf("%d\n", a);//打印就求负数的补码（反码加1）
//	printf("%u\n", b);//补码当做无符号数，打印就是一个很大的整数（原码、反码、补码一样）
//	return 0;
//}


//判断当前机器存储方式是小端字节序存储还是小端字节序存储


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	if (1 == check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	
//
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - a
//	//10000000 - a
//	//11111111111111111111111110000000 
//
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000 - b
//	//10000000 - b
//	//11111111111111111111111110000000
//
//	//10000000000000000000000011001000
//	//11111111111111111111111100110111
//	//11111111111111111111111100111000 - c
//	//00111000 - c
//	//00000000000000000000000000111000
//
//	char a = -128;
//	char b = 128;
//	char c = -300;//打印%d时：负数，从负号方向开始加1；正数，从正号方向开始加1
//
//	//11111111111111111111111111010100
//	//11111111111111111111111111010011
//	//10000000000000000000000000101100
//
//	printf("%d\n", a);
//	printf("%u\n", a);
//
//	printf("%d\n", b);
//	printf("%u\n", b);
//
//	printf("%d\n", c);
//	printf("%u\n", c);
//	
//  //截断
//	return 0;
//}


//int main()
//{
//	char a = 127;
//	char b = a + 1;
//
//	printf("%d\n", b);//打印出来的是原码
//	//char类型（-128~127）+256为一圈
//	//顺时针：0>>>1>>>127>>>-128>>>-1>>>0   
//	return 0;
//}



