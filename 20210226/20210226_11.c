/* Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int n;
	struct node *next;
} t_node;

int main(void) {
	typedef t_node* t_pointer;
	t_node node1;
	t_pointer p1 = (t_pointer)malloc(sizeof(node1));
	p1->n = 1;

	printf("p1->n: %d\n", p1->n);
	printf("Size p1: %d\n", sizeof(p1));

	free(p1);

	return 0;
}