// Program to find the sum of the first n natural numbers using recursion

#include <stdio.h>

int sum(int n);

int main()
{
    int n, result;
    printf("enter a number:");
    scanf("%d", &n);
    result = sum(n);
    printf("sum is : %d", result);
    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
