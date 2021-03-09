/* Задача 19:
 Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход. */
#include <stdio.h>
#include <stdlib.h>

void cat(char *filename);

int main(int argc, char *argv[])
{
	int i;
	printf("ARG: %d\n", argc);
	if (argc < 2)
	{
		printf("\nUsage:\n > %s file1 file2 file3\n\n",
			   argv[0]);
	}
	else {
		for (i = 1; i < argc; i++) {
			printf("file %d:\n", i);
			cat(argv[i]);
			printf("\n\n");
		}
	}

	return 0;
}

void cat(char *filename)
{
	int c;
	FILE *fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("Error opening %s\n", filename);
		exit(-1);
	}

	do
	{
		c = fgetc(fp);
		printf("%c", c);

	} while (!feof(fp));
}
