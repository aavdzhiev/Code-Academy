/* Задача 18.  
Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема. */
#include <stdio.h>
#include <string.h>

int main(void) {
	char string1[] = {"A string to be copied."};
	char string2[] = {};
	char string3[] = {"Second string to be copied!"};
	char string4[] = {};
	
	strcpy(string2, string1); /* copy string1 to string2 */
	printf("string2 : %s\n", string2);
	strcpy(string4, string3); /* copy string3 to string4 */
	printf("string4 : %s\n", string4);

	return 0;
}