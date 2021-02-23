/* Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число. */
#include <stdio.h>
#include <string.h>
union numStr {
	int n;
	char s[64];
};

enum tp {number, string};

void print_numStr(union numStr *u, enum tp t) {
	if (t == number) {
		printf("%d\n", u->n);
	} 
	else if (t == string) {
		printf("%s\n", u->s);
	}
}

int main(void) {
	union numStr number1 = {12};
	union numStr *p_number1 = &number1;
	enum tp num = number;
	printf("Here we print numStr as a number: \n");
	print_numStr(p_number1, num);

	strcpy(number1.s, "'15'");
	num = string;
	printf("Here we print numStr as a string: \n");
	print_numStr(p_number1, num);

	return 0;
}