#include<stdio.h>
int main()
{  
int n,i,j; 
printf("Enter the value of i:");
scanf("%d",&i);
printf("Enter the value of j:");
scanf("%d",&j);
for(n=i+1; n<j; n++) 
{
if(n%2==0) 
{ 
printf("%d ",n); 
}  
}  
return 0;  
} 
