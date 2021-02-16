/* Задача 8. Дефинирайте и инициализирайте променлива и пойнтер към нея. 
Отпечатайте адреса на пойнтера с %p с printf. */
#include <stdio.h>

int main(void) {
	int a = 12345;
	int *p = &a;

	printf("p address: %p", p);
	

	return 0;
}