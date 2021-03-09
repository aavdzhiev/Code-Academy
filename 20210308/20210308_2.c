/* Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът. */
#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	char *filename = "wearein.txt";
	fp = fopen(filename, "wt");
	if (fp == NULL)
		printf("Failed to open % s.\n", filename);

	fprintf(fp, "%s %s %s %d%c", "We", "are", "in", 2021, '!');

	fclose(fp);
	fp = NULL;

	char *new_filename = "mynewfilename.txt";

	if (rename(filename, new_filename) == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Unable to rename files. Please check files exist and you have permissions to modify files.\n");
    }

	remove(new_filename);
	
	return 0;
}