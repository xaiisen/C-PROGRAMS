// Program to give a 10% discount if the bill amount is 1000 or more, and find the final amount to pay

#include <stdio.h>

int main()
{
    int bill, dis, amt;
    printf("enter bill amount:");
    scanf("%d", &bill);
    amt = bill;
    dis = (amt >= 1000) ? 10 * bill / 100 : 0;
    amt = bill - dis;
    printf("\ndiscount given is: %d", dis);
    printf("\nfinal amount to pay is: %d", amt);
    return 0;
}
