/* Задача 3.
Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл. */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#define MAXLINES 42

void print_file(const char *filename, int file_n);

int main(int argc, char **argv) {
	int i;

	if (argc < 2)
	{
		printf("\nUsage:\n%s file1.txt file2.txt\n\n",
			   argv[0]);
	} else {
		for (i = 1; i < argc; i++) {
 			print_file(argv[i], i);
		}
	}

	return 0;
}

void print_file(const char *filename, int file_n) {
	int c, lines = 1, p = 1;
	FILE *fp;

	fp = fopen(filename, "r");
	if (NULL == fp) {
		printf("\nError %d: %s\n", errno, strerror(errno));
	}

	printf("\n%40.c File %d %.40c\n", '-', file_n, '-');
	do {
		c = getc(fp);

		if (c == '\n') {
			lines++;
		}

		if (lines > 42) {
			printf("\n%40.cPage %d%.40c\n", '-', p, '-');
			p++;
			lines = 0;
		}

		printf("%c", c);

	} while (!feof(fp));

	while (lines++ < MAXLINES) {
		printf("\n");
	}
	printf("\n%40.c Page %d %.40c\n", '-', p, '-');

}