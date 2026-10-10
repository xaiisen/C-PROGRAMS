// Program to find the greatest of three numbers using the nested conditional operator

#include <stdio.h>

int main()
{
    int a, b, c, g;
    printf("enter 3 numbers:");
    scanf("%d%d%d", &a, &b, &c);
    g = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("greatest number is: %d", g);
    return 0;
}
