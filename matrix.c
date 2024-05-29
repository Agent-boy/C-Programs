#include <stdio.h>
int main()
{
    int a[10][10];
    int r,c,i,j;
    printf("How many rows are there :-");
    scanf("%d",&r);
    printf("How many coloums are there :-");
    scanf("%d",&c);
    printf("Enter the matrix element :-\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix entered is :- \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}