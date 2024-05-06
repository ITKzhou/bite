#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("--------ɨ��--------\n");
	for (i = 0; i <= col; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//��ӡ�ַ�
		}
		printf("\n");
	}
	printf("\n");
}


//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int i = 0;
	while (count)
	{
		int x = rand() % row + 1;//����1~9����±�
		int y = rand() % col + 1;
		if (mine[x][y] != '1')//
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//������Χ�׵ĸ���
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}


//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("���������꣬�ո�ָ���\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//����Ϸ�
		{
			if (show[x][y] != '*')
			{
				printf("���������Ų飬");
			}
			else if (mine[x][y] != '1')//������
			{
				//�����������Χ�׵ĸ���,��ŵ�show����
				show[x][y] = GetMineCount(mine, x, y) + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else//����
			{
				printf("���ź����������\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("�������x(1~9)��y(1~9)��\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}	
}
