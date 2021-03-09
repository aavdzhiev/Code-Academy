/* Задача 9.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност. */
#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;

	fp = fopen("task9.txt", "w+");
	if (NULL == fp)
	{
		printf("Couldn't open file.\n");
	}

	fprintf(fp, "%s %s %s %d\n", "We", "are", "in", 2021);
	fprintf(fp, "%s %s %s %s %s\n", "This", "is", "my", "second", "line.");

	fclose(fp);

	return 0;
}