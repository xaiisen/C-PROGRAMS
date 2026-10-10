// Program to find the area and circumference of a circle

#include <stdio.h>

int main()
{
    float r;
    printf("enter radius: ");
    scanf("%f", &r);
    printf("area is: %.2f\n", 3.14 * r * r);
    printf("circumference is: %.2f\n", 2 * 3.14 * r);
    return 0;
}
