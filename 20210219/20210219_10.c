/* Задача 10. Направете два триъгълника с отместване. */
#include <stdio.h>
#define FSIZE 15

struct point
{
	int x;
	int y;
};

struct triangle
{
	struct point a;
	struct point b;
	struct point c;
};

struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;

	return temp;
}

void print_board(char board[FSIZE][FSIZE]);

int main(void)
{
	char board[FSIZE][FSIZE];
	int i, j, k;
	struct triangle t1, t2; /* declare two triangles */

	t1.a = makepoint(0, 0);
	t1.b = makepoint(0, 5);
	t1.c = makepoint(4, 5);

	t2.a = makepoint(6, 0);
	t2.b = makepoint(6, 5);
	t2.c = makepoint(10, 5);

	/* create a 15x15 field and print it */
	for (i = 0; i < FSIZE; i++)
	{
		for (j = 0; j < FSIZE; j++)
		{
			board[i][j] = '-';
		}
	}
	print_board(board);

	/* place the two dots on the board and print it */
	board[t1.a.y][t1.a.x] = '@';
	board[t1.b.y][t1.b.x] = '@';
	board[t1.c.y][t1.c.x] = '@';
	print_board(board);

	board[t2.a.y][t2.a.x] = '@';
	board[t2.b.y][t2.b.x] = '@';
	board[t2.c.y][t2.c.x] = '@';
	print_board(board);

	for (i = 0; i <= t1.c.y; i++)
	{
		for (j = t1.a.x; j < i; j++)
		{
			board[i][j] = '@';
		}
	}

	for (i = 0; i <= t2.c.y; i++)
	{
		for (j = t2.a.x; j < i; j++)
		{
			board[i][j] = '@';
		}
	}

	print_board(board);

	return 0;
}

void print_board(char board[FSIZE][FSIZE])
{
	int i, j;
	for (i = 0; i < FSIZE; i++)
	{
		for (j = 0; j < FSIZE; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}