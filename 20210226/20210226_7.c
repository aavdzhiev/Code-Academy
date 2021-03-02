/* Задача 7. Напишете масив от структури наречен keytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С. */
#include <stdio.h>

typedef struct key_t
{
	int id;
	char username[32];
} key_t;

int main(void)
{
	int i;
	struct key_t keytab[5] = {{1, "aasen"}, {2, "rrdslv"}, {3, "kkrm"}, {4, "pptkv"}, {5, "ggeorg"}};

	/* Или можем да се напълни с for loop
	for (i = 0; i < 5; i++)
	{
		printf("Enter username:\n");
		scanf("%s", &keytab[i].username);
		fflush(stdin);
		printf("Enter id:\n");
		scanf("%d", &keytab[i].id);
		fflush(stdin);
	} 
	*/

	printf("Usernames list:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d, %s\n", keytab[i].id, keytab[i].username);
	}

	return 0;
}