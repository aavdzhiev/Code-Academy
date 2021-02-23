/* Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */
#include <stdio.h>
#include <string.h>

union Data {
   int i;
   char str[20];
   double d;
};

enum tp {number, string, floating};

void convert(union numStr *u, enum tp t) {
	if (t == number) {
		printf("%d\n", u->n);
	} 
	else if (t == string) {
		printf("%s\n", u->s);
	}
}

int main(void) {
	
	return 0;
}