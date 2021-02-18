/* Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */
#include <stdio.h>

int add(int a, int b) { return (a + b); }
int substract(int a, int b) { return (a - b); }
int multiply(int a, int b) { return (a * b); }
int divide(int a, int b) { return (a / b); }

int main(void) {
	int (*func_ptr[4])() = {add, substract, multiply, divide}, a, b;
	int (*f)(int, int) = NULL;
	char loop = 'y';
	char sign;

	while (loop == 'y' || loop =='Y') {
		printf("for addition type + \nfor substraction type -\nfor multiplication type .\nfor division type /\n");
		fflush(stdin);
		scanf(" %c", &sign);

		printf("Input a: \n");
		fflush(stdin);
		scanf("%d", &a);

		printf("Input b: \n");
		fflush(stdin);
		scanf("%d", &b);

		if (sign == '+') {
			f = add;
		} else if (sign == '-') {
			f = substract;
		} else if (sign == '.') {
			f = multiply;
		} else if (sign == '/') {
			if (b == 0) {
				printf("Invalid operation. Cannot divide by 0.");
				f = NULL;
			}
			f = divide;
		}

		(NULL == f) ? 0 : printf("\n%d %c %d = %d\n", a, sign, b, (*f)(a, b));

		printf("Do you want another calculation? [Y/n] \n");
		fflush(stdin);
		scanf(" %c", &loop);
	}

	return 0;
}