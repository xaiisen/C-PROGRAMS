// Program to find the factorial of a number using a for loop

#include <stdio.h>

int main()
{
    int n, i, fact;
    printf("enter a number:");
    scanf("%d", &n);
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial is: %d", fact);
    return 0;
}
