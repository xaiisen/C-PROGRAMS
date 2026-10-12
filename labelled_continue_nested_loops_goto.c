// Program to demonstrate labelled continue in C (skipping to the next outer loop iteration using goto when j reaches 2)

#include <stdio.h>

int main()
{
    int n = 10;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 2)
                goto inner;
            printf("%d%d ", i, j);
        }
    inner:
        ;
    }
    return 0;
}
