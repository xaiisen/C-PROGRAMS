// Program to check the type of a triangle (equilateral, isosceles or scalene) from its sides

#include <stdio.h>

int main()
{
    int s1, s2, s3;
    printf("enter sides of a triangle:");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 == s2 && s2 == s3)
        printf("equilateral");
    else if (s1 == s2 || s2 == s3 || s3 == s1)
        printf("isosceles");
    else
        printf("scalene");
    return 0;
}
