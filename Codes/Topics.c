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

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int tatle = money;
//	int empty = tatle;
//	while (empty > 1)
//	{
//		tatle += empty / 2;//20+10+5+2+1+1=39
//		empty = (empty / 2) + (empty % 2);//10+0,5+0,2+1,1+1,1+0
//	}
//	printf("%d\n", tatle);
//	return 0;
//}

//��ӡ�������

//#define NUM 20
//void printblank(int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        printf(" ");
//}
//int main()
//{
//    int i, j, a[NUM][NUM];
//    for (i = 0; i < NUM; i++)
//    {
//        printblank(4 * (NUM - i));
//        for (j = 0; j <= i; j++)
//        {
//            if (i == j || j == 0)
//                a[i][j] = 1;
//            else
//                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//            printf("%-8d", a[i][j]);
//        }
//        printf("\n\n\n");
//    }
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int triangle[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)
//			{
//				triangle[i][i] = 1;
//				triangle[i][0] = 1;
//			}
//			else
//			{
//				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//			}
//			
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d  ", triangle[i][j]);
//		}
//		printf("\n");
//	}
//
//}

//void yangHuiTriangle(int n)
//{
//	int data[30][30] = { 1 }; //��һ��ֱ����ã���������
//
//	int i, j;
//
//	for (i = 1; i < n; i++) //�ӵڶ��п�ʼ��
//	{
//		data[i][0] = 1; //ÿ�еĵ�һ�ж�û������ֱ�Ӹ�1����֤����Խ�硣
//		for (j = 1; j <= i; j++) //�ӵڶ��п�ʼ��
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //���Ʒ���
//		}
//	}
//
//	for (i = 0; i < n; i++) //�����ӡ
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}
//
//int main()
//{
//	int num = 10;
//	yangHuiTriangle(num);
//	return 0;
//}


//�����֣�
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

//int main()
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			break;
//		}	
//	}
//	printf("�����ǣ�%c\n", killer);
//
//	return 0;
//}


//������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������

//int checkData(int* p)
//{
//	int tmp[7] = { 0 }; //��Ǳ�ʵ���ǹ�ϣ���˼·��һ��ʼÿ��Ԫ�ض���0��
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]]) //������λ�õı���Ѿ���1��������ظ���ֱ�ӷ���0��
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1; //������ǣ�������λ�ñ��Ϊ1��
//	}
//	return 1; //ȫ��������Ҳû�г����ظ������������OK��
//}


int checkData(int* p)
{
	char tmp = 0;

	int i;
	for (i = 0; i < 5; i++)
	{
		tmp |= 1 << p[i];
		//tmpÿ�λ���һλ1��p[i]�����1~5���У���1<<1��1<<5�����ϵĽ��������00111110��
		//����в��У���һ��������ȴ����һ��1������Ͳ�����00111110�����Կ����ж�tmp����
		//�Ľ���ǲ�������������ж���û���ظ���
	}
	return tmp == 0x3E;
}

//int main()
//{
//	int p[5]; //0 1 2 3 4�ֱ����a b c d e
//
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++) //���ѭ������
//					{
//						//���ڱȽϱ��ʽֻ��0��1������������Ҫ������������ֻ��һ��Ϊ�棬
//						//������ñȽϱ��ʽ��ֵ�ܺ�Ϊ1�ķ�ʽֱ���ж��������˻�Ҫ�ж����ܲ��С�
//						if ((p[1] == 2) + (p[0] == 3) == 1 && //B�ڶ����ҵ���
//							(p[1] == 2) + (p[4] == 4) == 1 && //�ҵڶ���E����
//							(p[2] == 1) + (p[3] == 2) == 1 && //�ҵ�һ��D�ڶ�
//							(p[2] == 5) + (p[3] == 3) == 1 && //C����ҵ���
//							(p[4] == 4) + (p[0] == 1) == 1 && //�ҵ��ģ�A��һ
//							checkData(p) //���ܲ���
//							)
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//void diveRank(int* p, int n)
//{
//	if (n >= 5) //��ʱ��n����������ѭ�������ġ�
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B�ڶ����ҵ���
//			(p[1] == 2) + (p[4] == 4) == 1 && //�ҵڶ���E����
//			(p[2] == 1) + (p[3] == 2) == 1 && //�ҵ�һ��D�ڶ�
//			(p[2] == 5) + (p[3] == 3) == 1 && //C����ҵ���
//			(p[4] == 4) + (p[0] == 1) == 1 && //�ҵ��ģ�A��һ
//			checkData(p)) //����
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	for (p[n] = 1; p[n] <= 5; p[n]++)
//	{
//		diveRank(p, n + 1); //ͨ���ݹ�ģ����ѭ����ÿ��һ�εݹ��൱�ڽ���һ���µ�ѭ����
//	}
//}
//
//int main()
//{
//	int p[5];
//
//	diveRank(p, 0);
//
//	return 0;
//}




