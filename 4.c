#include <stdio.h>
int main()
{
	int i,n,a[100],sum=0;
	printf("Enter the Length: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("The SUM is: %d",sum);
	return 0;
}
