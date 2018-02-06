#include<stdio.h>
void main()
{
char str[50];
int i,n;
printf("Enter the string:");
gets(str);
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",str[i]);
}
}
