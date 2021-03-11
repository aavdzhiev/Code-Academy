/* Задача 1.
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#define MAXLINE 80

void compare_file(FILE *fp1, FILE *fp2);

int main(void)
{
	FILE *fp1, *fp2;

	/* create test data */
	fp1 = fopen("compare1.txt", "w+");
	fp2 = fopen("compare2.txt", "w+");

	if (NULL == fp1 || NULL == fp2)
	{
		printf("Error: %d:%s\n", errno, strerror(errno));
	}
	fprintf(fp1, "This is my first line!\nThis is my second line.\nThird one.");
	fprintf(fp2, "This is my first line!\nThis is 2nd line.\nThird one.");

	fclose(fp1);
	fclose(fp2);

	/* compare the files */
	compare_file(fp1, fp2);

	return 0;
}

void compare_file(FILE *fp1, FILE *fp2)
{
	char ch1, ch2, buf[MAXLINE];
	long col = 0;
	int line = 1;

	fp1 = fopen("compare1.txt", "r");
	fp2 = fopen("compare2.txt", "r");

	if (NULL == fp1 || NULL == fp2)
	{
		printf("Error: %d:%s\n", errno, strerror(errno));
	}

	do
	{
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);

		if (ch1 == '\n')
		{
			line += 1;
			col = 0;
		}

		if (ch1 != ch2)
		{
			/* rewind the two pointers to the start of the line */
			fseek(fp1, -col, SEEK_CUR);
			fseek(fp2, -col, SEEK_CUR);

			fgets(buf, sizeof(buf), fp1);
			printf("Mismatch in line %d:\n\n", line);
			printf("%s", buf);
			printf("!= \n");
			fgets(buf, sizeof(buf), fp2);
			printf("%s\n", buf);

			fclose(fp1);
			fclose(fp2);
			return;
		}

		col += 1;

	} while (ch1 != EOF && ch2 != EOF);

	if (ch1 == EOF && ch2 == EOF)
	{
		printf("Files are the same.\n");
		fclose(fp1);
		fclose(fp2);
		return;
	}
}