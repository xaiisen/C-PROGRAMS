// Program to print the Fibonacci series up to n terms

#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
