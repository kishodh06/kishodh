#include <stdio.h>
int main() 
{
	int n,temp;
	printf("\n Enter the strings : ");
	scanf("%d",&n);
	printf("\n The reversed string is : ");
	while(n!=0) 
	{
		temp=n%10;
		if(temp!=0)
		{
			printf("%d",temp);
		}
		n=n/10;
	}
	return 0;
}
