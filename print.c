#include <stdio.h>
int main(void)
{
int a,b,c,d,k;
scanf("%d",&b);
k=b%10;
a=b/10;
c=a%10;
d=a/10;
printf("%d\t%d\t%d\t",d,c,k);
return 0;
}
