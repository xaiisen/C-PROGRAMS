// Program to print an n x n square pattern of stars, where n is entered by the user

#include <stdio.h>

int main()
{
    int n;
    int i, j;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

/*
Output (for n = 5):
enter a number:5
*****
*****
*****
*****
*****
*/
