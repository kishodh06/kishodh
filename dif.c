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
	for(i=a;i<=b;i=i+d)
	{
		sum+=i;
	}
	printf("\nThe answer is: %d\n",sum);
	return 0;
}
