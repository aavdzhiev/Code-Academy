/* Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6). */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define FIVE 5 /* for 5 of 35 */
#define SIX 6 /* for 6 of 42/49 */

/* НЕ УСПЯХ да направя проверка дали числото го е имало вече. Ако може, да ми напишете коментар как става. */

int * t535(void);
int * t642(void);
int * t649(void);
void print_arr(int *a, int len);
int valueinarray(int val, int arr[], int len);

int main(void) {
	int choice, len;
	srand(time(NULL)); // randomize seed

	printf("Which game would you bet on: \nPress:\n1 for 5 of 35\n2 for 6 of 42\n3 for 6 of 49\n");
	scanf("%d", &choice);

	int usr_nums[choice];
	
	int * (*totalizator)(void) = NULL;

	if (choice == 1) {
		totalizator = t535;
		len = FIVE;
	} else if (choice == 2) {
		totalizator = t642;
		len = SIX;
	} else if (choice == 3) {
		totalizator = t649;
		len = SIX;
	} else {
		printf("Wrong input.");
	}

	printf("Input %d numbers: \n", len);
	for (int i = 0; i < len; i++) {
		fflush(stdin);
		scanf("%d", &usr_nums[i]);
	}

	printf("\nYour numbers: ");
	print_arr(usr_nums, len);
	printf("\nTotalizator numbers: ");
	print_arr(totalizator(), len);

	return 0;
}

int * t535(void) {
	int i, r;
	static int arr[FIVE];

	for (i = 0; i < FIVE; i++) {
		arr[i] = rand() % 35;
	}

	return arr;
}
int * t642(void) {
	int i;
	static int arr[SIX];
	for (i = 0; i < SIX; i++) {
		arr[i] = rand() % 42;
	}

	return arr;
}
int * t649(void) {
	int i, r;
	static int arr[SIX];
	for (i = 0; i < SIX; i++) {
		r = rand() % 49;
		arr[i] = r;
	}

	return arr;
}

void print_arr(int *a, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
}


int valueinarray(int val, int arr[], int len) {
    int i;
    for(i = 0; i < len; i++) {
        if(arr[i] == val)
            return 1;
    }

    return 0;
}