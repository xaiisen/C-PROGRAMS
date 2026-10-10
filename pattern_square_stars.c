// Program to print a 5x5 square pattern of stars using nested for loops

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

/*
Output:
*****
*****
*****
*****
*****
*/
