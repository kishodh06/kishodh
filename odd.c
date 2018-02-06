#include<stdio.h>
void main()
{
    int M,N,a;
    scanf("%d%d",&M,&N);
    a=M+N;
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
