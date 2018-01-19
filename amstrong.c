#include <stdio.h>
int main(void)
{
int i,value,k,r,ans=0;
printf("Enter the number:");
scanf("%d",&value);
k=value;
while(k>0)
{
r=k%10;
ans=ans+(r*r*r);
k=k/10;
}
if(ans==value)
printf("Yes");
else
printf("No");
return 0;
}
