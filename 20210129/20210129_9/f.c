
#include <stdio.h>
#include "f.h"

void usrInput(void) { /* takes usr input and calls product(), then prints if the product of a and b is even */
    int a, b;
    printf("Input a: \n");
    scanf("%d", &a);
    printf("Input b: \n");
    scanf("%d", &b);
    
    printf("%d * %d = %d\n", a, b, (a*b));
    product(a, b) ? printf("The product of a and b is an even number.") : printf("Product of a and b is an odd number.");
}

int product(int a, int b) { /* takes a and b and calls isEven(a, b) */
    return isEven(a * b);
}

int  isEven(int n) { /* checks if a number is even */
	if (n % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}
