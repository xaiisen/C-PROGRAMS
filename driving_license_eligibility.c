
#include <stdio.h>

int main() {
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(age>=18)
        printf("you are eligible to apply for driving license");
    else {
        printf("you are not eligible to apply for driving license");
    }
    return 0;
}
