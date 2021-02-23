/* Задача 3.
Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана. */
#include <stdio.h>

struct product {
	int quantity;
	char name[128];
	float price;
};

int main(void) {
	struct product chocolate = {2, "chocolate", 2.99};

	printf("product: %s, quantity: %d, price: %.2f\n", chocolate.name, chocolate.quantity, chocolate.price);
	

	return 0;
}