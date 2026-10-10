// Program to check whether a number is even or odd using the conditional operator

#include <stdio.h>

int main()
{
    int num;
    printf("enter number:");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("even") : printf("odd");
    return 0;
}
