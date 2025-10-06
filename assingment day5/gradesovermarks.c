#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter the marks of the student (0 - 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:
            grade = 'A';  
            if (marks >= 95)
                printf("Grade: A+\n");
            else
                printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
    }

    return 0;
}
