#include <stdio.h>

int main() {

    int a[10];
    int i,n,m,found=0;
    printf("Enter your all number upto 10 :");
    scanf("%d",&n);
    printf("\nEnter all your number :\n");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("\nEnter number which you find out :");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("\n found at postion :- %d ",i);
            found++;
        }
    }
    if( found == 0)
    printf("\n no.not found ");
    return 0;
}