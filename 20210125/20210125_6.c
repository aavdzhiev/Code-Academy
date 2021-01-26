/* Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue. */
#include <stdio.h>

int main(void)
{
	int c;
	int letters = 0;
	int digits = 0;

	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
			++letters;
		}
		if (c >= '0' && c <= '9') {
			++digits;
		}
	}

	printf("Letters: %d\n", letters);
	printf("Digits: %d\n", digits);

	return 0;
}