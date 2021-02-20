/* Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки. */

struct point {
	int x;
	int y;
};

struct point makepoint(int x, int y) {
	struct point temp;

	temp.x = x;
	temp.y = y;

	return temp;
}

#include <stdio.h>

int main(void) {
	struct point pt1 = makepoint(1, 2);
	struct point pt2 = makepoint(3, 4);

	printf("pt1 x: %d, y: %d\n", pt1.x, pt1.y);
	printf("pt2 x: %d, y: %d\n", pt2.x, pt2.y);


	return 0;
}

