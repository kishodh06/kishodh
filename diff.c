#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    c=a-b;
    if(c%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
