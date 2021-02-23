/* Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
}; */
#include <stdio.h>

union t_Union {
	unsigned short int u_s : 6;
	char c : 6;
};

int main(void) {
	union t_Union u1 = {.u_s = 1};
	printf("u_s: %d\n");

	u1.c = 'z';
	printf("u_s: %c\n");

	return 0;
}