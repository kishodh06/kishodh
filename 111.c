#include<stdio.h>
int main()
{
	int a,count=0;
	printf("Enter the integer : ");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		++count;
	}
	printf("The answer is: %d",count);
}
