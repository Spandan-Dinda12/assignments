#include <stdio.h>
#include <math.h>

int main() {
    double num;

    // user input
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);
    // floor and ceiling
    printf("Number: %.2f\n", num);
    printf("Floor value = %.0f\n", floor(num));
    printf("Ceiling value = %.0f\n", ceil(num));

    return 0;
}
