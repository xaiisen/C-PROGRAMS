// Program to check whether a number is prime or not by counting its factors

#include <stdio.h>

int main()
{
    int n, i, count;
    printf("enter number: ");
    scanf("%d", &n);
    count = 1;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("prime number");
    else
        printf("not a prime number");
    return 0;
}
