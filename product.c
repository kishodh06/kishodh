#include<stdio.h>
int main()
{
int M,N,T;
scanf("%d%d",&M,&N);
T=M*N;
if(T%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
