#include <stdio.h>
int main()
{
	int a[100],m,i;
	printf("Enter the numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<m)
		{
			m=a[i];
		}
	}
	printf("\n The minimum element is %d ",m);
}

