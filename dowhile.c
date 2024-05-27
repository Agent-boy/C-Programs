#include <stdio.h>
int main()
{
    int n;
    float ar,r;
    do {
        printf("Enter your circle radius : ");
        scanf("%f",&r);
        ar= 3.14*r*r;
        printf("\nArea of circle is %f",ar);
        printf("\nPress 1:- try again\nPress 2:- exit !!!\n");
        scanf("%d",&n);
    } while (n==1);
     return 0;
}