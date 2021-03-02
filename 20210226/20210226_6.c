/* Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число. */
#include <stdio.h>
#include <string.h>

typedef struct {
	char username[32];
	int id;
} key_t;

int main(void) {
	key_t mm = {.id = 1235612};
	strcpy(mm.username, "mmetodiev");

	printf("Username: %s\n", mm.username);
	printf("Id: %d\n", mm.id);

	return 0;
}