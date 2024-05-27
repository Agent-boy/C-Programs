#include<stdio.h>  
int main()
{ int a,b,c;
       printf("enter your first number:");
       scanf("%d",&a);
       printf("\nenter your second number:");
       scanf("%d",&b);
       c = a + b;
       printf("sum of %d and %d is %d",a,b,c);
       return 0;
}