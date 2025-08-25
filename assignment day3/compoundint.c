#include <stdio.h>
#include <math.h>

int main()
{
  float P , r , n , t , Final , CI;

  printf("Enter the value of P: ");
  scanf("%f" , &P);

  printf("Enter the value of r: ");
  scanf("%f" , &r);

  printf("Enter the value of n: ");
  scanf("%f" , &n);

  printf("Enter the value of t: ");
  scanf("%f" , &t);

  Final = P * pow(1 + (r/n), n*t);
  
  printf("The final amount is: %f\n", Final);

  CI = Final - P;

  printf("Compound Interest is: %f\n", CI);

  return 0;
}







