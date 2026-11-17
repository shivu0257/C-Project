#include <stdio.h>
void big3() {
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // Check if n1 is the largest
    if (n1 >= n2 && n1 >= n3) {
        printf("%.2lf is the largest number.\n", n1);
    }
    // Check if n2 is the largest
    else if (n2 >= n1 && n2 >= n3) {
        printf("%.2lf is the largest number.\n", n2);
    }
    // If neither n1 nor n2 is the largest, n3 must be
    else {
        printf("%.2lf is the largest number.\n", n3);
    }

    //return 0;
}

