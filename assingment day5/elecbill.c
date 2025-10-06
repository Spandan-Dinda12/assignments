#include <stdio.h>

int main() {
    int units;
    float amount, total_amount, surcharge;
    int choice;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    printf("\nChoose your connection type:\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            if (units <= 100)
                amount = units * 1.5;
            else if (units <= 200)
                amount = 100 * 1.5 + (units - 100) * 2.5;
            else if (units <= 500)
                amount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
            else
                amount = 100 * 1.5 + 100 * 2.5 + 300 * 4.0 + (units - 500) * 6.0;

            surcharge = amount * 0.05; 
            total_amount = amount + surcharge;
            printf("\nElectricity Bill (Domestic): Rs. %.2f\n", total_amount);
            break;

        case 2: 
            if (units <= 100)
                amount = units * 2.5;
            else if (units <= 200)
                amount = 100 * 2.5 + (units - 100) * 4.0;
            else if (units <= 500)
                amount = 100 * 2.5 + 100 * 4.0 + (units - 200) * 6.0;
            else
                amount = 100 * 2.5 + 100 * 4.0 + 300 * 6.0 + (units - 500) * 7.5;

            surcharge = amount * 0.10; 
            total_amount = amount + surcharge;
            printf("\nElectricity Bill (Commercial): Rs. %.2f\n", total_amount);
            break;

        default:
            printf("\nInvalid choice! Please select 1 or 2.\n");
            return 1;
    }

    return 0;
}
