// Program to check whether a number is even or odd using switch case

#include <stdio.h>

int main()
{
    int num, c;
    printf("enter a number:");
    scanf("%d", &num);
    c = num % 2;
    switch (c)
    {
        case 0:
            printf("even");
            break;
        case 1:
            printf("odd");
            break;
    }

    return 0;
}
