#include <stdio.h>

int main()
{
    float H , W , Area , Peri ;

    printf("Enter the value of H: ");
    scanf("%f", &H);

    printf("Enter the value of W: ");
    scanf("%f", &W);

    Area = H * W;

    printf("The area of rectangle is %f\n " , Area);

    Peri = 2 * (H+W);

    printf("The perimeter of rectangle is %f\n " , Peri);

    return 0;
}