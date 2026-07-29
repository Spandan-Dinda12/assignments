#include <stdio.h>

int main() {
    int num, org, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;

    while (num > 0) {
        digit = num % 10;               
        rev = rev * 10 + digit; 
        num = num / 10;                 
    }
    
    if ( org== rev)
      printf("The number is Palinedrome");
    else 
      printf("The number is not Palindrome");

  return 0;
}