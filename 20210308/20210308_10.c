/* Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време. */
#include <stdio.h>

int main(void) {
	long fpos;
	FILE *fp = NULL;
	char *filename = "task10.txt";

	fp = fopen(filename, "w");
	if (NULL == fp) {
		printf("Couldn'n open the file %s\n", filename);
	}

	fputs("Write a line\nor two..\n", fp);

	fpos = ftell(fp);

	printf("File position: %li\n", fpos);	

	fclose(fp);
	
	return 0;
}