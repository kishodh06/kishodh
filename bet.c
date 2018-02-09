#include<stdio.h>
int main()
{
int a,l,r;
printf("Enter the number: ");
scanf("%d",&a);
printf("Enter the range: ");
scanf("%d%d",&l,&r);
if((l<a)&&(a<r))
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
