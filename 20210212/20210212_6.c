/* Задача 6. Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта */
#include <stdio.h>
#include <stdlib.h>

void realloc_arr(char *arr, int size);

int main(void) {
	char c;
	unsigned i, size = 2;
	char *buffer = (char *)malloc(size * sizeof(char));

	i = 0; /* count how many characters the user inputs */

	while ((c = getchar()) != EOF) {
		*(buffer + i) = c;

		if (i == size - 1) { /* ralloc the size of the buffer 2 times bigger */
			size *= 2; 
			realloc_arr(buffer, size);
		}

		i += 1;
	}

	buffer[i] = '\0';

	printf("%s", buffer);
	
	free(buffer);

	return 0;
}

void realloc_arr(char *arr, int size) {
	arr = realloc(arr, size * sizeof(char));
	
	if (NULL == arr) {
		printf("Reallocation memory error!\n");
		exit(1);
	}
}