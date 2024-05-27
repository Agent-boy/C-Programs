#include <stdio.h>
int main()
{
    int n,a,f=0;
    printf("\n Enter yor number to check prime or not :");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("\n %d not prime :",n);
    }
    else 
    {
        f=0;
        for(a=2;a<n;a++)
        {
            if (n%a==0)
            {
                f=1;
                break;
            }
        }
        if (f==0)
        {
            printf("\nYour number %d is prime : ",n);
        }
        else
        {
            printf("\n Your number %d is not prime :",n);
        
        }
    }
    return 0;
}