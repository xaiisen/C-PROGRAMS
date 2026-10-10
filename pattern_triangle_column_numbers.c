// Program to print a number triangle where each row counts from 1 up to its row number

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
1
12
123
1234
12345
*/
