/* Задача 7.
Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека. */
#include <stdio.h>

int main(void) {
	FILE *fp = NULL;
	char *filename = "task7.txt";
	int ch;

	fp = fopen(filename, "w");
	if (NULL == fp) {
		printf("Couldn't open %s.\n", filename);
	}

	for (ch = 65; ch <= 90; ch++) {
		fputc(ch, fp);
		fputc(' ', fp);
	}
	
	fclose(fp);

	return 0;
}