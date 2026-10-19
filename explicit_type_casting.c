// Program to demonstrate explicit type casting (forced conversion by the programmer)

#include <stdio.h>

int main()
{
    int a = 7, b = 2;
    float without_cast, with_cast;
    float pi = 3.14;
    int whole;

    without_cast = a / b;           // integer division, decimal part is lost
    with_cast = (float)a / b;       // a is converted to float first
    whole = (int)pi;                // float is converted to int, decimal part is cut off

    printf("without cast = %.2f\n", without_cast);
    printf("with cast = %.2f\n", with_cast);
    printf("pi as int = %d\n", whole);
    return 0;
}
