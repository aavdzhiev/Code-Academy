/* Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}
Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
 */
#include <stdio.h>

void print_array(int *a, int n);
int sum_array(int *a, int n);
void sort (int *a, int n);

int main(void) {
    int arr[10] = {8, 1, 7, 3, 9, 10, 4, 2, 5, 6}; /* sum should be 55 */

    printf("The sum of the arr[] elements is: %d\n", sum_array(arr, 10));
    
    printf("\narr[] before we sort it: ");
    print_array(arr, 10);
    sort(arr, 10);
    printf("arr[] sorted: ");
    print_array(arr, 10);
    
    return 0;
}

void print_array(int *a, int n) {
    while (n > 0) {
        printf("%d ", *a++);
        n--;
    }
    printf("\n");
}

int sum_array(int *a, int n) {
    int sum = 0;
    while (n > 0) {
        sum += *a++;
        --n;
    }
    
    return sum;
}

void sort(int *a, int n) {
    int i, j, temp;

    for (i = 0; i < n; i++) { 
        for (j = i + 1; j < n; j++) { 
            if (*(a + i) > *(a + j)) {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}