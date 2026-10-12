// Program to take input in a 3x5 two-dimensional array and display it

#include <stdio.h>

int main()
{
    int a[3][5];
    int i, j;
    printf("enter value for 3-rows / 5-cols:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
