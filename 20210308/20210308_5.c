/* Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл */
#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp_read = NULL;
	FILE *fp_write = NULL;
	int buf = 0;

	if (argc < 3)
	{
		printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",
			   argv[0]);
	}
	else
	{
		fp_read = fopen(argv[1], "r");
		if (NULL == fp_read)
		{
			printf("Could not open file.\n");
		}
		fp_write = fopen(argv[2], "w");
		if (NULL == fp_write)
		{
			printf("Could not open file.\n");
		}
	}

	while (1)
	{
		fscanf(fp_read, "%d, ", &buf);
		fprintf(fp_write, "%d ", buf);
		if (feof(fp_read))
			break;
	}

	if (NULL != fp_read)
		fclose(fp_read);
	if (NULL != fp_write)
		fclose(fp_write);

	return 0;
}