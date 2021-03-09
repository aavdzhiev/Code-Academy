/* Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори; */
#include <stdio.h>
#define MAX 10

int main(void) {
	FILE *fp = NULL;
	int buf;
	char str1[MAX], str2[MAX], str3[MAX], str4[MAX], str5[MAX];

	fp = fopen("task6.txt", "r");
	if (NULL == fp) {
		printf("Couldn't open file.\n");
		return (1);
	}
	
	fscanf(fp, "%s %s %s %d%s %s\n", str1, str2, str3, &buf, str4, str5);

	fclose(fp);

	printf("%s %s %s %d%s %s\n", str1, str2, str3, buf, str4, str5);

	return 0;
}