#include<stdio.h>

int main()
 {
  float a , b , difference;
  printf("Enter the value of a: ");
  scanf("%f", &a);

  printf("Enter the value of b: ");
  scanf("%f", &b);

  difference = a - b;
  printf("Difference = %.2f\n", difference);
  return 0;
}