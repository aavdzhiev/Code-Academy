/* Задача 9. Направете функця add(), която събира две точки. */
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point addpoint(struct point p1, struct point p2) {
	p1.x += p2.x;
	p1.y += p2.y;

	return p1;
}

int main(void) {
	struct point p1 = {1, 2};
	struct point p2 = {3, 4};
	struct point p3 = addpoint(p1, p2);

	printf("p1 x: %d, y: %d\n", p1.x, p1.y);
	printf("p2 x: %d, y: %d\n", p2.x, p2.y);
	printf("p3 x: %d, y: %d\n", p3.x, p3.y);


	

	return 0;
}