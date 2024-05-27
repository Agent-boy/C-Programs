#include<stdio.h>
int main()
{
    int a,s,b,n;
    printf("Enter how many rows you want :");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(s=1;s<=n-a;s++)
        {
            printf(" ");
        }
        for(b=1;b<=2*a-1;b++)
        {
         printf("*");
        }
        printf("\n");
        
    }
    return 0;
}