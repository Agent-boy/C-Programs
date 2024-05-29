#include<stdio.h>
int fact(int);
int main()
{
    int n,res;
    printf("Enter number to find factorial :");
    scanf("%d",&n);
    res=fact(n);
    printf("\nFactorial of number %d is %d",n,res);
    return 0;
}
int fact(int a)
{
    int i,f=1;
    for(i=a;i>=1;i--)
    {
        f=f*i;
    }
    return f;
}