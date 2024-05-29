#include<stdio.h>
int main()
{
    int adm[10],rl[10],marks[10],sub1[10],sub2[10],sub3[10],sub4[10],sub5[10],total[10];
    int n,i;
    printf("How many students details you want to enter :-");
    scanf("%d",&n);
    printf("\n Enter students details :-");
    for(i=0;i<n;i++)
    {
        printf("\n Enter student Admission no :-");
        scanf("%d",&adm[i]);
        printf("\n Enter student Roll no :-");
        scanf("%d",&rl[i]);
        printf("\n Enter your english marks :-");
        scanf("%d",&sub1[i]);
        printf("\n Enter your maths marks :-");
        scanf("%d",&sub2[i]);
        printf("\n Enter your sst marks :-");
        scanf("%d",&sub3[i]);
        printf("\n Enter your hindi marks :-");
        scanf("%d",&sub4[i]);
        printf("\n Enter your science marks :-");
        scanf("%d",&sub5[i]);
        marks[i] = sub1[i]+sub2[i]+sub3[i]+sub4[i]+sub5[i];
        total[i] = marks[i];
    }
    printf("------------------------------------------------------------------------------------------");
    printf("\n adm\t rl \t sub1 \t sub2 \t sub3 \t sub4 \t sub5 \t Total out of 500 ");
    printf("\n----------------------------------------------------------------------------------------");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d\t%3d\t%3d\t%3d\t%3d\t%3d\t%10d",adm[i],rl[i],sub1[i],sub2[i],sub3[i],sub4[i],sub5[i],total[i]);
        
    }
    printf("\n----------------------------------------------------------------------------------------");
    //printf("\n total marks of students outoff 500 is %d",total);
    return 0;
}