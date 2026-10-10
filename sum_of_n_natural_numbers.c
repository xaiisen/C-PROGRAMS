// Program to find the sum of the first n natural numbers

#include <stdio.h>

int main()
{
    int n, i, sum;
    printf("enter a number:");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is: %d", sum);
    return 0;
}
