#include<stdio.h>
int main()
{
	int a,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		sum=i+sum;
	}
	printf("The answer is: %d",sum);
}
