// Program to check whether a number is prime or not

#include <stdio.h>

int main()
{
    int n, i, j;
    j = 0;
    printf("enter a number:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0 is neither prime nor composite");
        return 0;
    }
    else if (n == 1)
    {
        j++;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                j++;
            }
        }
    }
    if (j == 2)
        printf("prime number");
    else
        printf("not a prime number");
    return 0;
}
