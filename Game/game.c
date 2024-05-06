#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


//初始化棋盘
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

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("--------扫雷--------\n");
	for (i = 0; i <= col; i++)//打印列号
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//打印字符
		}
		printf("\n");
	}
	printf("\n");
}


//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int i = 0;
	while (count)
	{
		int x = rand() % row + 1;//生成1~9随机下标
		int y = rand() % col + 1;
		if (mine[x][y] != '1')//
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//计算周围雷的个数
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


//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标，空格分隔：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//输入合法
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已排查，");
			}
			else if (mine[x][y] != '1')//不是雷
			{
				//计算该坐标周围雷的个数,存放到show数组
				show[x][y] = GetMineCount(mine, x, y) + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else//是雷
			{
				printf("很遗憾，你踩雷了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("输入错误x(1~9)，y(1~9)：\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}	
}
