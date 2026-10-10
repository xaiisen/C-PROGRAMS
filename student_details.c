// Program to take student details (name, roll no., age, height, gender) from user and print them

#include <stdio.h>

int main()
{
    int rol, age;
    float height;
    char name[50], gender[10];
    printf("enter your name:");
    scanf("%s", name);
    printf("enter your roll no.:");
    scanf("%d", &rol);
    printf("enter your age:");
    scanf("%d", &age);
    printf("enter your height:");
    scanf("%f", &height);
    printf("enter your gender:");
    scanf("%s", gender);
    printf("name-%s\nroll no.-%d\nage-%d\nheight-%.2f\ngender-%s\n", name, rol, age, height, gender);
    return 0;
}
