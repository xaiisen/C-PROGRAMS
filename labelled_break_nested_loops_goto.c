// Program to demonstrate labelled break in C (exiting both nested loops using goto when j reaches 4)

#include <stdio.h>

int main()
{
    int n = 10;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 4)
                goto inner;
            printf("%d%d ", i, j);
        }
    }
inner:
    ;
    return 0;
}
