#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

   

//����nֵ����ӡn���á�*����ɵ�X��ͼ��
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) 
//    { // ע�� while ������ case
//       // 64 λ������� printf("%lld") to
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if ((i == j) || (i + j == n - 1))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//����ʽ��ת�ã���ά���鰴�д�ӡ
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//�������кϲ�
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[2000] = { 0 };
//	//����������ĳ���
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	//������������Ԫ��
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//ð������
//	for (i = 0; i < n + m; i++)//��������
//	{
//		int j = 0;
//		for (j = 0; j< n + m - i - 1; j++)//ȷ��һ��Ԫ��ʱ�Ƚϵ�����
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}	
//	}
//	//��ӡ����
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�������кϲ�
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //����n��m
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    //����������������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ��������в����
//    i = 0; j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//
//    //�ж���δ������������Ƿ���Ҫ��ӡ���
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}
//


//��һά���顿����10����������ƽ��ֵ

//int main()
//{
//	int arr[10] = { 0 };
//	int sum = 0;
//	double arv = 0.0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("arv=%lf", sum / 10.0);
//
//	return 0;
//}


//��һά���顿��������

//int main()
//{
//	int i = 0;
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {6,7,8,9,10};
//	int temp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("������arr1[]=");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n������arr2[]=");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}