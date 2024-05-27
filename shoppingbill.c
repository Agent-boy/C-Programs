#include <stdio.h>
int main()
{
    int pcode[20],cost[20],qty[20],amt[20];
    int n,i,total;
    printf("\n Enter how many products are there :- ");
    scanf("%d",&n);
    printf("\n Enter shopping details : ");
    for(i=0;i<n;i++)
    {
        printf("\n Enter the product code :");
        scanf("%d",&pcode[i]);
        printf("\n Enter the product cost :");
        scanf("%d",&cost[i]);
        printf("\n Enter the product qty :");
        scanf("%d",&qty[i]);
        amt[i] = cost[i]*qty[i];
    }
    printf("-----------------------------------------");
    printf("\n pcode\t cost \t Quantity \t Amount ");
    printf("\n-----------------------------------------");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d\t%d\t6%d",pcode[i],cost[i],qty[i],amt[i]);
        total += amt[i];
    }
    printf("\n-----------------------------------------");
    printf("\n Total amount is %d",total);
    return 0;
}