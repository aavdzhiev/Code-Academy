/* Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви. */
#include <stdio.h>

void print_file(char *filename);

int main(int argc, char *argv[])
{

	FILE *fp_in, *fp_out;
	char *fnm_old, *fnm_new;

	if (argc < 3)
	{
		printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",
			   argv[0]);
	}
	else {
		
	}

	print_file(argv[2]);

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
