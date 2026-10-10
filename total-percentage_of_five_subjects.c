// Program to find the total marks and percentage of 5 subjects

#include <stdio.h>

int main()
{
    int physics, chemistry, maths, english, cs, total;
    float per;
    printf("enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &physics, &chemistry, &maths, &english, &cs);
    total = physics + chemistry + maths + english + cs;
    per = total / 5.0;
    printf("total marks are: %d\n", total);
    printf("percentage is: %.2f\n", per);
    return 0;
}
