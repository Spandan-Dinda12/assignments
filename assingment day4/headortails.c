#include <stdio.h>

int main() {
    int coin;

    printf("Enter 1 for Head or 0 for Tail: ");
    scanf("%d", &coin);

    if (coin == 1) {
        printf("It's Head!\n");
    } else if (coin == 0) {
        printf("It's Tail!\n");
    } else {
        printf("Invalid input! Please enter 1 for Head or 0 for Tail.\n");
    }

    return 0;
}
