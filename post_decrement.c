// Program to demonstrate post-decrement (a--)

#include <stdio.h>

int main()
{
    int a = 10, b = 5, c;
    c = a-- * b;
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
