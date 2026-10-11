// Program to demonstrate call by value (swapping two numbers using a function)

#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d,b=%d\n", a, b);
}

int main()
{
    int a = 10, b = 5;
    printf("a=%d,b=%d\n", a, b);
    swap(a, b);
    printf("a=%d,b=%d\n", a, b);
    return 0;
}
