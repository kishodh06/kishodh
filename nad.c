#include <stdio.h>
int main(void)
{
 int n,a,d,l,sum=0;
 printf("Enter the value of number of values:");
 scanf("%d",&n);
 printf("Enter the value of number of series:");
 scanf("%d",&a);
 printf("Enter the value of difference:");
 scanf("%d",&d);
 l=(n*d)+a-1; 
 sum=((a+l)*n)/2;
 printf("sum is %d",sum);
 return 0;
}
