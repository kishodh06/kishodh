#include<stdio.h>
void main()
{
int a,i,total=0;
printf("Enter the value of a:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
total=total+a;
}
printf("Sum is %d",total);
getch();
}
