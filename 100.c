#include<stdio.h>
void main()
{
int n,r,d=1;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
d=d*r;
n=n/10;
}
printf("The Answer is: %d",d);
}
