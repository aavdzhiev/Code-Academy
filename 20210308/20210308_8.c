/* Задача 8.
Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл. */
#include <stdio.h>

int main(void) {
	FILE *fp = NULL;
	char *filename = "task8.txt";

	fp = fopen(filename, "w");
	if (fp == NULL) {
		printf("Couldn't open the file %s\n", filename);
	}

	fputs("Some random string!\nSome string on a new line\n", fp);
	fputs("This is my third line!\n", fp);


	fclose(fp);
	

	return 0;
}