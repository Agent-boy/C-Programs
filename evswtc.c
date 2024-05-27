
#include<stdio.h>
int main(){
  int a,b;
  printf("Enter no. to check whether it's even or odd:");
  scanf("%d",&a);
  b=a%2;
  switch(b){
   case 0:printf("even");break;
   case 1:printf("odd");break;
  }
}