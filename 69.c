#include<stdio.h>
void main() 
{ 
int i,j,n;
scanf("%d%d",&i,&j);
for(n=i+1;n<j;n++)
{
if(n%2==0)
{
printf("%d",i);
}
}
}
