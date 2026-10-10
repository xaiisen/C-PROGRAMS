// Program to print Floyd's triangle (continuous numbers) with a space between the numbers

#include <stdio.h>

int main()
{
    int num;
    num = 1;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
