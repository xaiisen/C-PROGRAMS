// Program to search a number in an array using a function (linear search)

#include <stdio.h>

int search(int num[], int n, int s)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (num[i] == s)
            return i + 1;
    }
    return -1;
}

int main()
{
    int num[100], n, s, i, pos;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("enter a number you want to search:");
    scanf("%d", &s);
    pos = search(num, n, s);
    if (pos == -1)
        printf("number not found");
    else
        printf("your number is in %d position", pos);
    return 0;
}
