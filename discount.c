#include<stdio.h>
int main()
{
    int dis;
    printf("enter your bill amount:");
    scanf("%d",&dis);
    if(dis<1000)
    {
        printf(" there is no discount for you :");
    }
    else if(dis>=1000 && dis<=2000)
    {
        printf("yeh you got 5 percentage discount ");
        printf("\nyour discount is  %d",dis/20);
    } 
    else if(dis>2000 && dis<5000)
    {
        printf("yeh you got 10 percentage discount ");
        printf("\nyour discount is %d ",dis/10);
    }
    else 
    {
        printf("yeh you got 25 percentage discount ");
        printf("\nyour discount is %d ",dis/4);
    }
    return 0;
}