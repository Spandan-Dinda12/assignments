#include <stdio.h>

int main()
{
 int Num , LastDigit ;

 printf("Enter the Num: ");
 scanf("%d" , &Num);

 LastDigit = Num % 10;
 printf("The last digit of Integer: %d\n", LastDigit);

 return 0;

}