/*Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BOARDROWS 3
#define BOARDCOLUMS 8

enum direction
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

void initializeBoard(int **board) /*initalize board*/
{
	int num0 = 0, num1 = 9, num2 = 1, i, j;
	for (i = 0; i < BOARDROWS; i++)
	{
		for (j = 0; j < BOARDCOLUMS; j++)
		{
			if (i == 2)
			{
				board[i][j] = num2;
				num2++;
			}
			if (i == 1)
			{
				board[i][j] = num1;
				num1++;
			}
			if (i == 0)
			{
				board[i][j] = num0;
			}
		}
	}
}

void printBoard(int **board)
{
	int i, j;
	for (i = 0; i < BOARDROWS; i++)
	{
		printf("\n");
		for (j = 0; j < BOARDCOLUMS; j++)
		{
			printf("%2d ", board[i][j]);
		}
	}
}

int isGameEnd(int **board)
{ /*check is Game end*/
	int i, j, count = 0;
	for (i = 0; i < BOARDROWS; i++)
	{
		for (j = 0; j < BOARDCOLUMS; j++)
		{
			if (board[i][j] >= 2)
			{
				count++;
			}
		}
	}
	if (count == 0)
	{
		printf("GAME END!\n");
		return 0;
	}
	else
	{
		return 1;
	}
}

/* Function to get the position of pull*/
void getPosition(int **board, int pull, int *rowNum, int *colNum)
{
	int i, j;
	for (i = 0; i < BOARDROWS; i++)
	{
		for (j = 0; j < BOARDCOLUMS; j++)
		{
			if (board[i][j] == pull)
			{
				*rowNum = i;
				*colNum = j;
			}
		}
	}
}
/*Function to check if move is valid*/
int isValid(int **board, int *rowNum, int *colNum, enum direction dir)
{
	int row, col, midRow, midCol;
	if (dir == UP)
	{
		row = *rowNum - 2;
		col = *colNum;
		midRow = *rowNum - 1;
		midCol = *colNum;
	}
	else if (dir == DOWN)
	{
		row = *rowNum + 2;
		col = *colNum;
		midRow = *rowNum + 1;
		midCol = *colNum;
	}
	else if (dir == LEFT)
	{
		row = *rowNum;
		col = *colNum - 2;
		midRow = *rowNum;
		midCol = *colNum - 1;
	}
	else
	{
		row = *rowNum;
		col = *colNum + 2;
		midRow = *rowNum;
		midCol = *colNum + 1;
	}
	if (board[midRow][midCol] == 1)
	{
		printf("INVALID MOVE! You are trying to get 1 out of the game!\n");
		return 0;
	}

	if ((row >= 0 && row <= 2) && (col >= 0 && col <= 7) && (board[row][col] == 0))
	{
		return 1;
	}
	else
	{
		printf("INVALID MOVE!\n");
		return 0;
	}
}

int **move(int **board, int pull, int *rowNum, int *colNum, enum direction dir)
{
	if (isValid(board, rowNum, colNum, dir))
	{
		if (dir == UP)
		{
			board[*rowNum][*colNum] = 0;
			board[*rowNum - 1][*colNum] = 0;
			board[*rowNum - 2][*colNum] = pull;
		}
		else if (dir == DOWN)
		{
			board[*rowNum][*colNum] = 0;
			board[*rowNum + 1][*colNum] = 0;
			board[*rowNum + 2][*colNum] = pull;
		}
		else if (dir == LEFT)
		{
			board[*rowNum][*colNum] = 0;
			board[*rowNum][*colNum - 1] = 0;
			board[*rowNum][*colNum - 2] = pull;
		}
		else
		{
			board[*rowNum][*colNum] = 0;
			board[*rowNum][*colNum + 1] = 0;
			board[*rowNum][*colNum + 2] = pull;
		}
	}
	return board;
}

int main(void)
{
	int i, pull, rowNum, colNum;
	enum direction d;
	int **board = (int **)malloc(BOARDROWS * sizeof(int *)); /*Allocated memory*/
	for (i = 0; i < BOARDROWS; i++)
	{
		board[i] = (int *)malloc(BOARDCOLUMS * sizeof(int));
	}

	initializeBoard(board);
	printf("The board looks like: \n");
	printBoard(board);

	while (isGameEnd(board))
	{
		printf("\nEnter pull do you want to move?\n: ");
		scanf(" %d", &pull);
		printf("\nWhich direction you want to move ? 0 for up | 1 for down | 2 for left | 3 for right\n: ");
		scanf(" %d", &d);
		getPosition(board, pull, &rowNum, &colNum);
		move(board, pull, &rowNum, &colNum, d);
		printBoard(board);
	}

	for (i = 0; i < BOARDROWS; i++)
	{
		free(board[i]);
	}

	return 0;
}