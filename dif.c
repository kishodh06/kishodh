#include <stdio.h>
int main(void)
{
	int a,b,i,d,sum=0;
	printf("\nEnter the initial value: ");
	scanf("%d",&a);
	printf("\nEnter the difference: ");
	scanf("%d",&d);
	printf("\nEnter the end value: ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	printf("\nThe answer is: %d\n",sum);
	return 0;
}
