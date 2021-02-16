/* Задача 17.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4. */
#include <stdio.h>
#define STR_LEN 100

void str_copy(char *dest, char *src);

int main(void) {
	char string1[] = {"A string to be copied."};
	char string2[STR_LEN];
	char string3[] = {"I am very good at string copying!"};
	char string4[STR_LEN];

	str_copy(string2, string1);
	printf("String 2: %s\n", string2);
	str_copy(string4, string3);
	printf("String 4: %s\n", string4);

	return 0;
}

void str_copy(char *dest, char *src) {
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
}