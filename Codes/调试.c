#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//vs2022x86�����£��ֲ�������ջ���ط���ߵ�ַ����͵�ַ����ѭ����arr[12ʱ��
//arr[12]]�ĵ�ַǡ�þ���i�ĵ�ַ��arr[12]=0��i=0��������ѭ����
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
// 
// 
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int bottle = money;//һ���԰�Ǯ������20ƿˮ
//	int empty = money;
//	while (empty > 1)//����2����ƿ���ܶһ�һ��
//	{
//		bottle += empty / 2;//��ƿ�ӳ���2�ۼӵ�ƿ������
//		empty = empty / 2 + empty % 2;//
//	}
//	printf("%d\n", bottle);
//	return 0;
//}

//��ӡ����

//int main()
//{
//	int n = 0;
//	printf("�����������ϰ벿�ֵ�������\n");
//	scanf("%d", &n);//�ϲ��ֵ�����
//	int i = 0;//��¼����
//	int j = 0;//��¼�ո���
//	int k = 0;//��¼�Ǻ���
//	for (i = 1; i <= n; i++)//��ӡ�ϲ��ֵ�n��
//	{
//		for (j = 1; j <= n - i; j++)//��ӡ�Ŀո���+��i��=������n
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i - 1; k++)//ÿ���Ǻ�����1,3,5,7,9....
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < n; i++)//��ӡ�²��ֵ�n-1��
//	{
//		for (j = 1; j <= i; j++)//��i�о���i���ո�
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * n - 1- 2 * i; k++)
//		{
//			//����ˮƽ�Խ��߳��ȣ�2*n-1
//			//��i�оͼ���ˮƽ�Խ��߳��ȵ�2*i��
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ�
// 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153

//#include <math.h>
//
//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int n = 1;//һ����������һλ
//		int m = i;//����iֵ���������Ƚ�
//		int sum = 0;
//		//1.�õ�i�ļ�λ��n
//		while (m /= 10)
//		{
//			n++;
//		}
//		m = i;
//		//2.����ÿλ��n�η������
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		//3.����i�Ƚ�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}	
//	}
//	return 0;
//}



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222


//#include <math.h>

//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("������a��n��\n");
//	scanf("%d %d", &a,&n);
//	
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			sum += a * pow(10, i);
//		}
//	}
//	printf("%d��ǰ%d��Sn=%d\n", a, n, sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("������a��n��\n");
//	scanf("%d %d", &a, &n);
//	
//	int temp = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		temp += a * pow(10, i);
//		sum += temp;
//	}
//	printf("%d��ǰ%d��Sn=%d\n", a, n, sum);
//	return 0;
//}


