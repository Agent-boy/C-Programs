
#include <stdio.h>
int main()
{
    int num;
    printf("Enter you number :");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("your number %d is even:",num);
    } 
    if (num%2!=0)
    {
        printf("your number %d is odd:", num);
    }
    return 0;
}