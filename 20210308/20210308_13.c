/* Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете. */
#include <stdio.h>

int main(void)
{
	int c, nwlines = 0;
	FILE *fp = NULL;
	char *filename = "task13.txt";

	fp = fopen(filename, "w+");
	if (NULL == fp)
	{
		printf("Couldn' open file.\n");
	}

	fputs("Some\ntext\non\nfive\nnew\nlines.", fp);
	rewind(fp);

	do {
      c = fgetc(fp);
	  if (c == '\n') {
		  nwlines++;
	  }

      if( feof(fp) ) {
         break ;
      }
      
   } while(1);

	fclose(fp);

	printf("The %s file has %d new lines.\n", filename, nwlines);

	return 0;
}