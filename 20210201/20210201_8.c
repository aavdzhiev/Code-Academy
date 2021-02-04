/* Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */
#include <stdio.h>
#include <string.h>

void reverse(char *s);

int main(void)
{
	char s[] = {"redrum live desserts knits regal"};
	printf("before: \n");
	printf("%s\n", s);
	reverse(s);
	printf("reversed: \n");
	printf("%s\n", s);

	return 0;
}

void reverse(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = strlen(s) - 1; i < strlen(s) / 2; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}