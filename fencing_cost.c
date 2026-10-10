// Program to find the fencing required and the total cost of fencing a rectangular field

#include <stdio.h>

int main()
{
    int l, w, per, cost, totalcost;
    printf("enter length: ");
    scanf("%d", &l);
    printf("enter width: ");
    scanf("%d", &w);
    per = 2 * (l + w);
    printf("enter per meter cost of fencing:");
    scanf("%d", &cost);
    printf("\ntotal fencing required %d meter", per);
    printf("\ntotal cost of fencing is: %d", per * cost);
    return 0;
}
