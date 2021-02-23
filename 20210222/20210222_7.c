/* Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */
#include <stdio.h>
#include <string.h>

union un {
	int n;
	float f;
	char s[128];
};

int main(void) {
	union un test1;
	/* Всеки път стойностите на отделните елементи ще се променят, тъй като споделят един адрес */
	test1.n = 123;
	printf("%d, %f, %s\n", test1.n, test1.f, test1.s);

	test1.f = 24.5;
	printf("%d, %.2f, %s\n", test1.n, test1.f, test1.s);
	
	strcpy(test1.s, "Some string");
	printf("%d, %f, %s\n", test1.n, test1.f, test1.s);

	return 0;
}