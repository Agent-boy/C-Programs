#include <stdio.h>
int main()
{
    int num1,num2,num3,g;
    printf("enter your first number:");
    scanf("%d",&num1);
    printf("enter your second number:");
    scanf("%d",&num2);
    printf("enter your third number:");
    scanf("%d",&num3);
    g=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
    printf("the greatest number %d is",g);
    return 0;
}