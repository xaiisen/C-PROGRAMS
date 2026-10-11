// Program to make a calculator using switch case and do-while loop that repeats on 1 and exits on any other key

#include <stdio.h>

int main()
{
    int num1, num2;
    char op, n;
    do
    {
        printf("enter two numbers:");
        scanf("%d%d", &num1, &num2);
        printf("press:-\n'+'-add\n'-'-sub\n'*'-multiply\n'/'-division\nenter your choice: ");
        scanf(" %c", &op);
        switch (op)
        {
            case '+':
                printf("%d", num1 + num2);
                break;
            case '-':
                printf("%d", num1 - num2);
                break;
            case '*':
                printf("%d", num1 * num2);
                break;
            case '/':
                if (num2 == 0)
                    printf("cannot divide by zero!");
                else
                    printf("%d", num1 / num2);
                break;
            default:
                printf("invalid choice!");
        }
        printf("\nPRESS:-\n1-to calculate again\nany key-to exit\nenter your choice:");
        scanf(" %c", &n);
    } while (n == '1');
    return 0;
}
