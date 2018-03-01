#include<stdio.h>
int main()
{
	int p,t,r,in;
	printf("\n Enter the amount: ");
	scanf("%d",&p);
	printf("\n Enter the time: ");
	scanf("%d",&t);
	printf("\n Enter the rate: ");
	scanf("%d",&r);
	in=(p*r*t)/100;
	printf("\n The interest is:%d",in);
}
