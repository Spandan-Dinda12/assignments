 #include <stdio.h>
 #include <math.h>
 int main()
 {
    int N , Q , LasDigit;

    printf ("Enter the N: ");
    scanf("%d", &N);

    Q = N/10;
    printf("The quoient is: %d\n", Q);

    LasDigit = N - (Q*10);
    printf("The Last digit is: %d\n", LasDigit); //this is without mod

    return 0;
 }