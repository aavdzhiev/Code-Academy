/* Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */
#include <stdio.h>
#define FSIZE 15

struct point {
	int x;
	int y;
};

void print_board(char board[FSIZE][FSIZE]);

int main(void) {
	char board[FSIZE][FSIZE];
	int i, j;

	/* define and initialize the points */
	struct point a = {3,4};
	struct point b = {7, 10};

	/* create a 15x15 field and print it */
	for (i = 0; i < FSIZE; i++) {
		for (j = 0; j < FSIZE; j++) {
			board[i][j] = '-';
		}
	}
	print_board(board);

	/* place the two dots on the board and print it */
	board[a.y][a.x] = '@';
	board[b.y][b.x] = '@';
	print_board(board);

	/* connect the dots so it becomes a rectangle and print */
	for (i = a.y; i <= b.y; i++) {
		for (j = a.x; j <= b.x; j++) {
			board[i][j] = '@';
		}
	}
	print_board(board);

	return 0;
}


void print_board(char board[FSIZE][FSIZE]) {
	int i, j;
	for (i = 0; i < FSIZE; i++) {
		for (j = 0; j < FSIZE; j++) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}