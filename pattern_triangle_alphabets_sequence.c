// Program to print a triangle of alphabets where each row goes from A up to its row's letter

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
A
AB
ABC
ABCD
ABCDE
*/
