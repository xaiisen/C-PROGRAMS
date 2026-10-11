// Program to make a simple calculator (add, subtract, multiply, divide) using switch case

#include <stdio.h>

int main()
{
    int num1, num2, op;
    printf("enter two numbers:");
    scanf("%d%d", &num1, &num2);
    printf("press \n1-add\n2-sub\n3-multiply\n4-division\nenter your choice: ");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            printf("%d", num1 + num2);
            break;
        case 2:
            printf("%d", num1 - num2);
            break;
        case 3:
            printf("%d", num1 * num2);
            break;
        case 4:
            if (num2 == 0)
                printf("cannot divide by zero!");
            else
                printf("%d", num1 / num2);
            break;
        default:
            printf("invalid choice!");
    }

    return 0;
}
