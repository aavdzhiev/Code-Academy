/* Задача 11.
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t */
#include <stdio.h>

int main(void) {
	fpos_t position;
	FILE *fp = NULL;
	char *filename = "task11.txt";

	fp = fopen(filename, "w");
	if (NULL == fp) {
		printf("Couldn'n open the file %s\n", filename);
	}

	fputs("Write a line\nor two..\nor three...\n", fp);

	fgetpos(fp, &position);

	printf("File position: %li\n", position);	

	fclose(fp);
	
	return 0;
}