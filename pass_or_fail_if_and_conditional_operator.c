// Program to check whether a student has passed or failed using if and the conditional operator

#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks out of 100:");
    scanf("%d", &marks);
    if (marks <= 100)
        (marks > 33) ? printf("pass") : printf("fail!");
    else
        printf("invalid marks");
    return 0;
}
