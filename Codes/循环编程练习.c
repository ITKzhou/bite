#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

////�ж�������
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if (a == b && b == c && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}


//����Ļ�����9*9�˷��ھ���

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////100~200������

//#define N 100
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = N; i <= 200; i++)
//	{
//		int flag = 1;//���������������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//����һ���ַ�����������һ���߳�Ϊ5��������ʥ������
//���ݷ�Χ����֤������ַ���һ�� char ���͵�ֵ

//int main()
//{
//    char a;
//    scanf("%c", &a);//����һ�������ַ�
//    int i = 1;//�������õ�
//    int j, g; //j��������ո��õģ�g��������ַ�+�ո��õ�
//    for (i = 1; i < 6; i++)//��������i��ǰ5��ִ�е�ѭ����������5�У�
//    {
//        for (j = 5 - i; j > 0; j--)//�����n�е�ǰ5-n���ո�n<=5��
//        {
//            printf("*");
//        }
//        for (g = 0; g < i; g++)//�����n�е����пո����ַ�
//        {
//            printf("%c ", a);//ע���������%c����һ���ո�
//        }
//        printf("\n");//��n�����������ִ�л��в���
//    }//���е�����������n�е��ַ�������ͼ��
//    return 0;
//}

//��������λ�ò����
//int main() {
//    int a, b, t;
//    scanf("%d,%d", &a, &b);
//    t = a;
//    a = b;
//    b = t;
//    printf("a=%d,b=%d\n", a, b);
//
//    return 0;
//}


////strlen()���ַ������ȣ������հ׼�
//int main()
//{
//	char str[] = { "hello  bite!" };
//	int r = strlen(str);
//	printf("%d\n", r);
//	return 0;
//}



