#include <stdio.h>

int main() {
    float f1, f2, sum;

    printf("Enter the value of f1: ");
    scanf("%f", &f1);

    printf("Enter the value of f2: ");
    scanf("%f", &f2);

    sum = f1 + f2;

    printf("Sum = %.2f\n", sum);

    return 0;
}