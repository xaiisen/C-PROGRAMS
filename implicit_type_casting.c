// Program to demonstrate implicit type casting (automatic conversion by the compiler)

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 2.5;
    float result;
    char ch = 'A';
    int ascii;

    result = a + b;     // int is automatically converted to float
    ascii = ch;         // char is automatically converted to int

    printf("result = %.2f\n", result);
    printf("ascii value of A = %d\n", ascii);
    return 0;
}
