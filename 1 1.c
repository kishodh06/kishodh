#include<stdio.h>
void main()
{
   int a=0,b=1,c=0,i,n;
   printf("Enter the length of series:");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
 {
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
  }
}
