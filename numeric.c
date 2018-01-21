#include<stdio.h>
int main(void) 
{
int value,count=0,r;
scanf("%d",&value);
while(value>0)
{
r=value%10;
if(r>=0 & r<=9)
count++;
value=value/10;
}
if(count==0)
printf("No");
else
printf("Yes");
return 0;
}
