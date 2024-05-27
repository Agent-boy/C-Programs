#include <stdio.h>
int main()
{
    int r,res,ch;
    printf("\npress1:- calculate area \npress2 :-calculate circumference \npress3:-calculate diameter \npress4:-calculate smicircle\n");
    scanf("%d",&ch);
    printf("enter your radius");
    scanf("%d",&r);
    switch(ch)
    {
        case 1:
        res= 3.14*r*r;
        printf("your area of circle is %d :-",res);
        break;
        
        case 2:
        res=2*3.14*r;
        printf("your circumference is %d :-",res);
        break;

        case 3:
        res=2*r;
        printf("your diametere is %d ",res);
        break;

        case 4:
        res=3.14*r;
        printf("your circle semicircle %d:-",res);
        break;

        default:
        printf("do your calculation self !!!");
    
    }
    return 0;
}