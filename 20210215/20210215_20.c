/* Задача 20.  Връщаме се на кода написан в задача 17. Нека сега отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали размерът на стринга, в който копираме, не е по-малък от размера на стринга, от който копираме, и какво да се случва тогава. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str_copy_end(char *dest, char *src);

int main(void) {
	char str1[] = {"A string to be copied."};
	char str2[23];
	
	int lenStr1 = sizeof(str1) / sizeof(char);
	int lenStr2 = sizeof(str2) / sizeof(char); /* check the string lenght with sizeof(), because it's empty */

	printf("str1 len is: %d\n", lenStr1);
	printf("str2 len is: %d\n", lenStr2);

	memset(str2, '\0', sizeof(str2));

	str_copy_end(&str2[lenStr1 - 1], &str1[lenStr1 - 1]);
	printf("str2: %s\n", str2);


	return 0;
}

void str_copy_end(char *dest, char *src) {
	while (*src) {
		*dest-- = *src--;
	}
}