#include <stdio.h>
#include <math.h>

int main() 
{
   int n, original, rem, rev=0;
   printf("Enter a number: ");
   scanf("%d", &n);
   original=n;
   while (n>0) 
   {
      rem=n%10;
      rev = rev*10 + rem;
      n = n/10;
   }
      if (n == rev)
        printf("%d is a palindrome number \n" , original);
      else
        printf("%d is not a palindrome number \n" , original);

   return 0;

}