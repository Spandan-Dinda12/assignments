#include <stdio.h>
int main()
{
    int i , n , sum = 0;

    printf("Enter the Number: ");
    scanf("%d" , &n);

    for(i = 0 ; i <= n ; i++) {
        sum += i;
    }

     printf("Sum of first %d natural numbers is: %d\n", n, sum);

     return 0;
}