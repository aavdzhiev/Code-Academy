/* Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа. */
#include <stdio.h>

int main(void)
{
	int c, count = 0;
	char str[1000];

	printf("\nOnly lines longer than 80 characters will be printed: \n");
	while ((c = getchar()) != EOF && count < 1000 - 1)
	{
		if (count < 81)
		{
			// reset the counter
			if (c == '\n')
			{
				count = 0;
			
			} else { 
				str[count++] = c;
				if (count > 80) {
					str[count] = '\0';
					printf("%s", str);
				}

			}
		} else {
			putchar(c);
			if (c == '\n') {
				count = 0;
			}
		}
	}

	return 0;
}