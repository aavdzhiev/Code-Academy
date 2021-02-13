/* Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */
#include <stdio.h>
#include <stdlib.h>

void malloc_c(char *s, size_t size);
void realloc_c(char *s, size_t new_size);

int main(void) {
	char *p1 = NULL;
	size_t mem_size = 0;

	printf("How much memory do you want? \n");
	scanf("%zu", &mem_size);
	malloc_c(p1, mem_size);

	printf("How much memory do you want to reallocate? \n");
	scanf("%zu", &mem_size);
	realloc_c(p1, mem_size);

	return 0;
}

void malloc_c(char *s, size_t size) {
	s = (char *)malloc(size);
	
	if (NULL == s) {
		printf("Reallocation memory error!\n");
		exit(1);
	} else {
		printf("Memory allocated successfully: %p\n", s);
	}
}

void realloc_c(char *s, size_t new_size) {
	s = realloc(s, new_size);
	
	if (NULL == s) {
		printf("Reallocation memory error!\n");
		exit(1);
	} else {
		printf("Memory re-allocated successfully: %p\n", s);
	}
}

