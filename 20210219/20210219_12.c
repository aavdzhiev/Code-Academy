/* Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати. */
#include <stdio.h>
#include <math.h>

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

double distance(struct point a, struct point b) {
	double d;
	d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	
	return d;
}

int main(void) {
	struct point a, b;
	a = makepoint(1, 2);
	b = makepoint(1, 3);

	printf("a x: %d, y: %d\n", a.x, a.y);
	printf("b x: %d, y: %d\n", b.x, b.y);
	printf("distance between a and b: %.6f\n", distance(a, b));

	

	return 0;
}