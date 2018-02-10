#include <stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		count++;

	}
	if(count==0)
	printf("NO");
	else
	printf("YES");
	return 0;
}
