#include <stdio.h>

int main() {
    int i, j, n, Prime;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {  // Start from 2, as 1 is not prime
        Prime = 1;  // Assume i is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0;  // Not a prime number
                break;
            }
        }

        if (Prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
