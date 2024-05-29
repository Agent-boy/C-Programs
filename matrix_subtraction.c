#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int i,j,r1,r2,c1,c2;
    printf("How many rows are there :-");
    scanf("%d",&r1);
    printf("How many coloums are there :-");
    scanf("%d",&c1);
    printf("How many rows are there :-");
    scanf("%d",&r2);
    printf("How many coloums are there :-");
    scanf("%d",&c2);
    if(r1==r2 && c1 == c2)
    {   
        printf("Enter your first matrix element :- \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }   
        }
        printf("Enter your second matrix :- \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }   
        }
        printf("Your first matrix is :- \n");
        for(i=0;i<r1;i++)
        {
            printf("\n");
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\nYour second matrix is :- \n");
        for(i=0;i<r2;i++)
        {
            printf("\n");
            for(j=0;j<c2;j++)
            {
                printf("%d\t",b[i][j]);
            }
        }
        printf("\nSum of Matrices is : ");
        for(i = 0; i< r1; i++)
        {
            printf("\n");
            for(j=0; j<c1;j++)
            {
                printf("%d\t",a[i][j]-b[i][j]);
            }
        }
    }
    else
    {
        printf("operation not perform because size does not matched :-");
    }
    return 0;
}