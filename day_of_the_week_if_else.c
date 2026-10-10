// Program to print the day of the week for a number between 1 and 7 using if-else if ladder

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number in between 1-7: ");
    scanf("%d", &num);
    if (num == 1)
        printf("monday");
    else if (num == 2)
        printf("tuesday");
    else if (num == 3)
        printf("wednesday");
    else if (num == 4)
        printf("thursday");
    else if (num == 5)
        printf("friday");
    else if (num == 6)
        printf("saturday");
    else if (num == 7)
        printf("sunday");
    else
        printf("invalid number");
    return 0;
}
