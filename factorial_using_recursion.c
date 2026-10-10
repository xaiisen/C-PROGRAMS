// Program to find the factorial of a number using recursion

#include <stdio.h>

int fact(int n);

int main()
{
    int n, result;
    printf("enter a number:");
    scanf("%d", &n);
    result = fact(n);
    printf("factorial is : %d", result);
    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
