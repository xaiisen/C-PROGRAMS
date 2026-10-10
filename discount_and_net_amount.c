// Program to find the amount, 10% discount and net amount of a product

#include <stdio.h>

int main()
{
    int cost, qty, amt, dis, netamt;
    printf("enter cost of a product: ");
    scanf("%d", &cost);
    printf("enter quantity of products: ");
    scanf("%d", &qty);
    amt = cost * qty;
    dis = 10 * amt / 100;
    netamt = amt - dis;
    printf("amount is: %d\n", amt);
    printf("discount is: %d\n", dis);
    printf("netamount is: %d\n", netamt);
    return 0;
}
