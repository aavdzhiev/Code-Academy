/* Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи. */
#include <stdio.h>

int linear_search(int *a, int n, int key);

int main(void) {
    int arr[10] = {2, 5, 8, 1, 3, 9, 10, 12, 13, 19};
    int num, result;

    printf("Input a number to search in the array: \n");
    scanf("%d", &num);
    result = linear_search(arr, 10, num);
    if (result != -1) {
        printf("Your number is found on index: %d\n", result);
    } else {
        printf("Your number is not found.");
    }
    
    return 0;
}

int linear_search(int *a, int n, int key) {
    int index = 0;

    while (n > 0) {
        if (*a == key) {
            return index;
        }

        index++;
        n--;
        a++;
    }

    return -1;
}