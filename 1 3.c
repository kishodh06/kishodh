#include<stdio.h>
#include<string.h>
void main ()
{
  int a,b;
  scanf("%d",&a);
  while(a!=0)
    {
      b= a % 10;
      if (b%2!=0)
	{
	  printf ("%d\t",b);
	}
	a=a/10;
    }
}
