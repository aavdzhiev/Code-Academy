/* Задача 16.
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл). */
#include <stdio.h>

void remove_line(char *source, char *dest, int line)
{
	FILE *fp_in = NULL;
	FILE *fp_out = NULL;
	char c;
	int l = 1;

	fp_in = fopen(source, "r");
	if (NULL == fp_in)
	{
		printf("Could not open file %s.\n", fp_in);
	}
	fp_out = fopen(dest, "w");
	if (NULL == fp_out)
	{
		printf("Could not open file %s.\n", fp_out);
	}

	do
	{
		if (feof(fp_in))
		{
			break;
		}
		c = fgetc(fp_in);
		if (c == '\n')
		{
			l++;
		}
		
		if (l == line) {
			continue;
		} else {
			fputc(c, fp_out);
		}
	} while (1);

	fclose(fp_out);
	fclose(fp_in);
}

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",
			   argv[0]);
	}
	else
	{
		remove_line(argv[1], argv[2], 5);
	}

	return 0;
}