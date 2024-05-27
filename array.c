#include<stdio.h>
int main()
{
    int a[10];
    int i,n;
    printf("\nHow many number you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Result is");
    for(i=n-1;i>=0;i--)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}