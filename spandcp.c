#include<stdio.h>
int main()
{
    int sp,cp;
    printf("enter your cost price :");
    scanf("%d",&cp);
    printf("enter your selling price:");
    scanf("%d",&sp);
    if (cp<sp)
    {
        printf("profit is %d ",sp-cp);
    }
    else if (sp<cp)
    {
        printf("lose is %d",cp-sp);
    }
    else 
    {
        printf(" no profit and no lose");
    }
    return 0;
}