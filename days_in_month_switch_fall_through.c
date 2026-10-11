// Program to print the number of days in a month using fall through in switch case

#include <stdio.h>

int main()
{
    int month;
    printf("enter month:");
    scanf("%d", &month);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n31 days");
            break;
        case 2:
            printf("\n28 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n30 days");
            break;
        default:
            printf("invalid choice!");
    }

    return 0;
}
