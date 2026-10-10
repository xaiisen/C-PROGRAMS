// Program to add two numbers using a function

#include <stdio.h>

int sum(int a, int b);              // Function declaration (prototype)

int main()
{
    int a, b, res;
    printf("enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    res = sum(a, b);                // Function call
    printf("sum is %d", res);
    return 0;
}

int sum(int a, int b)               // Function definition
{
    return a + b;
}
