// Program to print a number triangle of n rows, where each row counts from 1 up to its row number

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

/*
Output (for n = 5):
enter a number:5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
