#include<stdio.h>
int hcf(int,int);
int main()
{
   int n,res,a,b;
   printf("Enter your two number for hcf");
   scanf("%d\n%d",&a,&b);
   res=hcf(a,b);
   printf("HCF of two number %d and %d is %d",a,b,res);
   return 0;
}
int hcf(int a,int b)
{  
   int i,res;
   for(i=1;i<=a && i<=b; i++ )
   {
    if(a%i==0 && b%i==0)
        res = i;
   }
   return res; 
}
