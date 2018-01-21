#include<stdio.h>
void main()
{
int i;
scanf("%d",&i);
printf("%d",fact(i));
}
int fact(int i)
{
if(i==0)
return 1;
else
return i*fact(i-1);
}
