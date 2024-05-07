#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

   

//输入n值，打印n行用“*”组成的X形图案
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) 
//    { // 注意 while 处理多个 case
//       // 64 位输出请用 printf("%lld") to
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


//行列式的转置，二维数组按列打印
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


//有序数列合并
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[2000] = { 0 };
//	//输入两数组的长度
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	//连续输入数组元素
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//冒泡排序
//	for (i = 0; i < n + m; i++)//遍历数组
//	{
//		int j = 0;
//		for (j = 0; j< n + m - i - 1; j++)//确定一个元素时比较的趟数
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
//	//打印数组
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//有序数列合并
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //输入n和m
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    //输入两个升序序列
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并有序序列并输出
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
//    //判断尚未遍历完的数组是否需要打印输出
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}
//


//【一维数组】输入10个整数，求平均值

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


//【一维数组】交换数组

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
//	printf("交换后arr1[]=");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n交换后arr2[]=");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

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

//打印杨辉三角

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
//	int data[30][30] = { 1 }; //第一行直接填好，播下种子
//
//	int i, j;
//
//	for (i = 1; i < n; i++) //从第二行开始填
//	{
//		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
//		for (j = 1; j <= i; j++) //从第二列开始填
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
//		}
//	}
//
//	for (i = 0; i < n; i++) //填完打印
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


//找凶手；
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

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
//	printf("凶手是：%c\n", killer);
//
//	return 0;
//}


//猜名次
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次

//int checkData(int* p)
//{
//	int tmp[7] = { 0 }; //标记表，实际是哈希表的思路。一开始每个元素都是0。
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]]) //如果这个位置的标记已经是1，则代表重复，直接返回0。
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1; //如果不是，则给这个位置标记为1。
//	}
//	return 1; //全部标记完毕也没有出现重复的情况，代表OK。
//}


int checkData(int* p)
{
	char tmp = 0;

	int i;
	for (i = 0; i < 5; i++)
	{
		tmp |= 1 << p[i];
		//tmp每次或上一位1，p[i]如果是1~5都有，则1<<1到1<<5都或上的结果将会是00111110，
		//如果有并列，则一定会至少却其中一个1，结果就不会是00111110，所以可以判断tmp最终
		//的结果是不是这个数字来判断有没有重复。
	}
	return tmp == 0x3E;
}

//int main()
//{
//	int p[5]; //0 1 2 3 4分别代表a b c d e
//
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++) //五层循环遍历
//					{
//						//由于比较表达式只有0和1两个结果，如果要两个条件有且只有一个为真，
//						//则可以用比较表达式的值总和为1的方式直接判定。别忘了还要判定不能并列。
//						if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//							(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//							(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//							(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//							(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
//							checkData(p) //不能并列
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
//	if (n >= 5) //此时的n是用来控制循环层数的。
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//			(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
//			checkData(p)) //查重
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
//		diveRank(p, n + 1); //通过递归模拟多层循环，每进一次递归相当于进了一层新的循环。
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




