/* Задача 7. Разгледайте и имплементирайте quicksort алгоритъма. */
#include <stdio.h>
#include <stdlib.h>

void quicksort(int *array, int length);
void swap(int *a, int *b);
void print_array(int *array, int length);

int main() {
    int input_array[] = {2, 20, 1, 33};
    int *array_ptr = &input_array[0];
    int LENGTH = 4;

    printf("Array before: \n");
    print_array(array_ptr, LENGTH);

    printf("Array after quicksort: \n");
    quicksort(array_ptr, LENGTH);
    print_array(array_ptr, LENGTH);

    return 0;
}

void quicksort(int *array, int length) {
    int partition; 
    int i, j; 
    int r_len, l_len; 
    int *r_array, *l_array;

    if (length < 2) {
        return; 
    } 

    partition = *(array); 
    i = 1; 

    for (int j = 1; j <= length; j++)  {
        if (*(array + j) < partition) {
            swap((array + i), (array + j));
            i++;
        }
    }

    swap(array, (array + i -1)); 

    l_len = i - 1; 
    l_array = array;
    r_array = (array + i); 
    r_len = length - i;

    quicksort(l_array, l_len);

}

void swap(int *a, int *b) {
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int *array, int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}