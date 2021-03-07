/* Задача 7.3. Пренапишете предишното упражнение като
вмъкнете конструкцията switch-case в един цикъл while(), така
че питането да се повтаря, докато потребителят не въведе
числото 4, което е поставено в питането за изход от програмата .
Така се създават менюта за изпълнение на програма на С. */
#include <stdio.h>

int main()
{
	int choice;

	while (choice != 4)
	{
		printf("\nPress 1 to see the message Hello!\n");
		printf("Press 2 to see a Poem\n");
		printf("Press 3 to see a hidden message\n");
		printf("Press 4 to exit\n");

		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\nHello!\n");
			break;
		case 2:
			printf("i carry your heart with me(i carry it in\n my heart) i am never without it(anywhere\n");
			break;
		case 3:
			printf("\n hidden !@#$%%^&*()\n");
			break;
		case 4:
			printf("\nBye bye!\n");
			break;
		default:
			printf("\nInvalid input :(\n");
			break;
		}
	}

	return 0;
}
