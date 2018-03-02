#include <stdio.h>
int main()
{
	int n,a[100],i=0,j,temp,p=1,b;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	printf("\nEnetr the digits: ");
	scanf("%d",&b);
	while(n>0)
	{
		temp=n%10;
		a[i]=temp;
		n=n/10;
		i++;
	}
	for(i=0;i<b;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
