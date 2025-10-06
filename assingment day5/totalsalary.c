#include <stdio.h>

int main() {
    float basic_salary, hra, ta, da, gross_salary;

    
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    
    hra = 0.20 * basic_salary;   
    ta  = 0.10 * basic_salary;   
    da  = 0.0005 * basic_salary; 

   
    gross_salary = basic_salary + hra + ta + da;

   
    printf("Gross Salary  : %.2f\n", gross_salary);

    return 0;
}
