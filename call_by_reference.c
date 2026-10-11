// Program to demonstrate call by reference (swapping two numbers using pointers)

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d,b=%d\n", *a, *b);
}

int main()
{
    int a = 10, b = 5;
    printf("a=%d,b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d,b=%d\n", a, b);
    return 0;
}
