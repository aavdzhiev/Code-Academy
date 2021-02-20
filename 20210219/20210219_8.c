/* Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета. */
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point min;
	struct point max;
};

struct point makepoint(int x, int y) {
	struct point temp;

	temp.x = x;
	temp.y = y;

	return temp;
}

int main(void) {
	int i, j;
	struct point ptMin = makepoint(0, 0);
	struct point ptMax = makepoint(15, 15);

	struct rect screen = { ptMin, ptMax };
	int size = screen.max.x;

	/* create array of chars */
	char scr[size][size];

	/* fill the scr[][] with '-' */
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scr[i][j] = '-';
		}
	}

	/* print the arr of chars */
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%c", scr[i][j]);
		}
		printf("\n");
	}

	

	return 0;
}