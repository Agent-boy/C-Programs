#include<stdio.h>

int main()
{
    int opt,l,b,h,a,p,n,s,s1,s2,s3;
    float ar,r,c,d;
    printf("\nPress 1:-rectangle\n Press 2: circle\n Press 3: square \nPress 4 triangle\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        printf("\nEnter length of rectangle :-");
        scanf("%d",&l);
        printf("\nEnter breath of rectangle :-");
        scanf("%d",&b);
        printf("\n Press 1:- Area of rectangle\nPress 2:- Perimeter of rectangle");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            a=l*b;
            printf("\nArea of rectangle is %d :-",a);
            break;
            case 2:
            p=2*(l+b);
            printf("\nPerimetre of rectangle is %d :-",p);
            break;
            default:
            printf("\n Not an invalid option");
            break;
        }
        break;
        case 2:
        printf("\n Enter your radius of circle :-");
        scanf("%f",&r);
        printf("\nPress 1:- Area of circle \n Press 2:- Circumference of circle\n Press 3:- Double diametere of circle ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            ar=3.14*r*r;
            printf("\nArea of circle id %f :-",ar);
            break;
            case 2:
            c=2*3.14*r;
            printf("\n Circumference of circle is %f :-",c);
            break;
            case 3:
            d=2*r;
            printf("your radius is double now %f :-",d);
            break;
            default:
            printf("\n Not an invalid option");
            break;
        }
        break;
        case 3:
        printf("\nEnter side of square :-");
        scanf("%d",&s);
        printf("\n Press 1:- Area of square \n Press 2:- Perimeter of square");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            a=s*s;
            printf("\nArea of square is %d :-",a);
            break;
            case 2:
            p=4*s;
            printf("\nPerimetre of square is %d :-",p);
            break;
            default:
            printf("\n Not an invalid option");
            break;
        }
        break;
        case 4:
        printf("\nEnter base of trinagle:- ");
        scanf("%d",&b);
        printf("\n Enter height of triangle :-");
        scanf("%d",&h);
        printf("\nEntre first side of triangle :-");
        scanf("%d",&s1);
        printf("\nEntre second side of triangle :-");
        scanf("%d",&s2);
        printf("\nEntre third side of triangle :-");
        scanf("%d",&s3);
        printf("\nPress 1:- Area of trinagle \nPress 2:- Perimetre of tringle ");  
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            a=0.5*b*h;
            printf("\n Area of trinagle is %d :-",a);
            break;
            case 2:
            p=s1+s2+s3;
            printf("\n Perimetre of trinagle is %d :-",p);
            break;
            default:
            printf("\n Not an invalid option");
            break;
        }
        break;
        default:
        printf("Invalid option please enter valid option !!!");
        break;
    }
    return 0;
}