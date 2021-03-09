/* Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви. */
#include <stdio.h>
#include <stdlib.h>

void print_file(char *filename);

int main(int argc, char *argv[])
{
	int c;
	FILE *fp_in, *fp_out;
	char *fnm_old = "upper.txt", *fnm_new = "tmp.txt";

	if (argc < 3)
	{
		printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",
			   argv[0]);
	}
	else {
		fp_in = fopen(fnm_old, "r");
		fp_out = fopen(fnm_new, "w+");

		if(NULL == fp_in || NULL == fp_out) {
			printf("Unable to open file.\n");
			exit(1);
		}

		do {
			c = fgetc(fp_in);

			if (c >= 97 && c <= 122) {
				c -= 32;
			}

			fputc(c, fp_out);

		} while (!feof(fp_in));
	}
	
	fclose(fp_in);
	fclose(fp_out);

	remove(fnm_old);

	rename(fnm_new, fnm_old);
	print_file(fnm_old);


	return 0;
}



void print_file(char *filename)
{
	int c;
	FILE *fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("Error opening %s\n", filename);
	}

	do
	{
		c = fgetc(fp);
		printf("%c", c);

	} while (!feof(fp));
}
