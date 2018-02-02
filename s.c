#include<stdio.h>
void main()
{
int a,b,t;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\n After swapping: %d %d",a,b);
}
