#include <stdio.h>
int main(void)
{
int i,j,temp;
scanf("%d%d",&i,&j);
temp=i;	
i=j;
j=temp;
printf("%d\t%d",i,j);
return 0;
}
