#include <stdio.h>

void fact() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Factorials do not exist for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i; // Multiplies factorial by i in each step
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    //return 0;
}

