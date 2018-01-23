#include<stdio.h>
int main()
{
int n,dec,inc;
printf("Enter an integer\n");
scanf("%d", &n);
printf("Enter the dec and inc range\n");
scanf("%d %d", &dec,&inc);
{
if((n-dec)*(n-inc)<=0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
}
