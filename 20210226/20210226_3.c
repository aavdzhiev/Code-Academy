/* Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип. */
#include <stdio.h>

int main(void) {
	typedef char *pointer;

	pointer p1, p2;
	char s[] = "My name is ";
	p1 = s;
	p2 = "Anastas";

	printf("%s%s", p1, p2);
	

	return 0;
}