#include<stdio.h>
int main()
{
  int n , i;
  long long facto=1;

  printf("Enter the Number: ");
  scanf("%d" , &n);

   for (i = 1; i <= n; i++) {
        facto *= i;
    }

    printf("Factorial of %d = %lld\n", n, facto);

    return 0;

}


