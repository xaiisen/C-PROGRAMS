// Program to print a number triangle (Floyd's triangle) with continuous numbers

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
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
1
23
456
78910
1112131415
*/
