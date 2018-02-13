#include <stdio.h>
int main()
{
	char a[1000];
	int i,c,j,count=0;
	scanf("%[^\n]s",a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<=c;j++)
	{
	if(a[i]==a[j])
	count++;
	}
	}
	if(count==0)
	printf("YES");
	else
	printf("NO");
	return 0;
}
