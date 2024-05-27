#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nEntre a number to get table :-");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
        c=a*b;
        printf("\n%d X %d = %d",a,b,c);
    }
    return 0;
}