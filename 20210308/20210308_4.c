/* Задача 4.
Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла; */
#include <stdio.h>
#define MAX 15

int main(void)
{
	char buf[MAX];
	FILE *fp = NULL;
	char *filename = "test1.txt";

	fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("Failed to open %s\n", filename);
	}

	fgets(buf, 15, fp);
	printf("My first line is: %s", buf);
	fgets(buf, 15, fp);
	printf("My second line is: %s", buf);
	fgets(buf, 15, fp);
	printf("My third line is: %s", buf);
	/* here the pointer position moves automatically to the end of the line */

	fclose(fp);

	return 0;
}