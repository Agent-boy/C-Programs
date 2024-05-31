#include <stdio.h>
void input(int p[],int n)
{
   for (int i=0;i<n;i++)
   {
    printf("Enter a number :");
    scanf("%d",&p[i]);
   }
}
int main()
{
    int a[10],n,i;
    printf("\n How many number are there :");
    scanf("%d",&n);
    if (n > 10) {
        printf("Array size exceeded. Please enter a number less than or equal to 10.\n");
        return 1;
    }
    input(a,n);
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }   
    return 0;
}