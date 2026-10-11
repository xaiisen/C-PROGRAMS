// Program to find the area and perimeter of a rectangle or the area and circumference of a circle using nested switch case

#include <stdio.h>
int main()
{
    int num, l, b, n, ch;
    float r;
    printf("PRESS\n1-RECTANGLE\n2-CIRCLE\nenter your choice:");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("enter length:");
            scanf("%d", &l);
            printf("enter breadth:");
            scanf("%d", &b);
            printf("PRESS\n1-AREA\n2-PERIMETER\nenter your choice:");
            scanf("%d", &n);
            switch (n)
            {
                case 1: printf("area = %d", l * b); break;
                case 2: printf("perimeter = %d", 2 * (l + b)); break;
                default: printf("invalid choice");
            }
            break;
        case 2:
            printf("enter radius:");
            scanf("%f", &r);
            printf("PRESS\n1-AREA\n2-CIRCUMFERENCE\nenter your choice:");
            scanf("%d", &ch);
            switch (ch)
            {
                case 1: printf("area = %.2f", 3.14 * r * r); break;
                case 2: printf("circumference = %.2f", 2 * 3.14 * r); break;
                default: printf("invalid choice");
            }
            break;
        default:
            printf("invalid choice!");
    }

    return 0;
}
