#include <stdio.h>
int main()
{
    int a;
    for(a=0;a<=50;a++)
    {
       if(a%2==0)
       {
        printf("\n here are all your even number %d,",a);

       }
       else 
       {
         printf("\n here are all your odd number %d,",a);
       }
    }
    return 0;

}