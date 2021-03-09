/* Задача 3. Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка. */
#include <stdio.h>

int main(void) {
	FILE *fp = NULL;
	char *filename = "test1.txt";
	char c;

	fp = fopen(filename, "wt");
	if (NULL == fp) {
		printf("Failed to open % s.\n", filename);
	}

	fprintf(fp, "Hi!\nMy name is R.\nI am 23 years old.");
	fclose(fp);

	fopen(filename, "r");
	if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
   } do {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
   } while(1);
   
	fclose(fp);

	return 0;
}