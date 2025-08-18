#include<stdio.h>

int main()
{
    float C, F;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;

    printf("The temperature in Fahrenheit is %.2f\n", F);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32) * 5 / 9;
    
    printf("The temperature in Celsius is %.2f\n", C);

    return 0;

} 
