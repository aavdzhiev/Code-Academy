/* Задача 6. Направете по подобен начин триъгълник: */
#include <stdio.h>
#define FSIZE 15

struct point {
	int x;
	int y;
};

void print_board(char board[FSIZE][FSIZE]);

int main(void) {
	char board[FSIZE][FSIZE];
	int i, j, k;

	/* define and initialize the points */
	struct point a = {3, 4};
	struct point b = {3, 10};
	struct point c = {7, 10};

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
	board[a.y][a.x] = 'a';
	board[b.y][b.x] = 'b';
	board[c.y][c.x] = 'c';
	print_board(board);

	/* connect the dots so it becomes a triangle and print */
	j = a.x;
	for (i = a.y; i <= c.y; i++)
	{
		for (k = a.x; k <= j ; k++)
		{
			board[i][k] = '@';
			
		}
		j++;
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