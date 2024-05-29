#include<stdio.h>
int main()
{
    int i,n=0;
    char str[50];
    printf("Enter the string :- ");
    scanf("%s",str);
    printf("\nEnter string is %s",str);
    for(i=0;str[i] !='\0';i++)
    {
        n++;
    }
    printf("\nlength of string is %d",n);
    return 0;
}
