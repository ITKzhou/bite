#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdlib.h>
#include <Windows.h>
//�ַ����������м������ʾ
//int main()
//{
//	//���������ַ�����
//	char chr1[] = { "HolleZhouYuan" };
//	char chr2[] = { "#############" };
//	//�õ�������±�
//	int left = 0;
//	int rigt = sizeof(chr1) / sizeof(chr1[0]) - 1;
//	//chr1[]����chr2[]��
//	while (left <= rigt)
//	{
//		chr2[left] = chr1[left];
//		chr2[rigt] = chr1[rigt];
//		printf("%s", chr2);
//		Sleep(1000);//��ʾͣ��Ч��
//		system("cls");//ˢ��һ����ʾ
//		left++;//������һ�ֵ�ѭ��
//		rigt--;
//	}
//	printf("%s\n", chr2);	
//	return 0;
//}


//���ֲ���ʵ���������������ҵ�keyֵ�����������±�

//int main()
//{
//	//��������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����keyֵ
//	int key = 0;
//	printf("��������Ҫ���ҵ�ֵ��\n");
//	scanf("%d", &key);
//
//	//�õ������±�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int rigt = sz - 1;
//	int flag = 0;//�������ѭ�����ǲ����ҵ����ҵ�����1
//
//	//���ֲ���
//	//0.���ҵ�
//	while (left <= rigt)
//	{
//		//�����м��±�
//		int mid = left + (rigt - left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < arr[mid])
//		{
//			rigt = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			flag = 1;//�ҵ���1
//			break;
//		}
//	}
//	//1.�����ҵ�
//	if (!flag)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


