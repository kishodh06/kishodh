#include<stdio.h>
void main()
{
int a[10],i,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("The array elements are:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d%d\n",a[i],i);
}
}
