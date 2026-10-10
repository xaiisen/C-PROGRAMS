// Program to print a triangle of alphabets where each row repeats its letter

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
A
BB
CCC
DDDD
EEEEE
*/
