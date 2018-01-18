#include<stdio.h>
void main()
{
int r,n,temp,sum=0;
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==temp)
{
printf("Yes it is a Palidrome");
}
else
{
printf("Not a Palidrome");
}
getch();
}
