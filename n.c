#include<stdio.h>
int main()
{
	int n,k,i,s[10];
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the k'th number: ");
	scanf("%d",&k);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("The k'th number is: %d",s[k-1]);
	return 0;
}
