#include<stdio.h>
int main()
{
  int i,n;

  printf("Enter the Number: ");
  scanf("%d" , &i);

  for (n=1; n<=10; n++) {
    printf("%d * %d = %d\n  "  , i , n , i*n);
  }
    printf("\n");

    return 0;

}
