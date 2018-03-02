#include<stdio.h>
int main()
{
    int a,n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&m);
    a=pow(n,m);
    printf("The answer is: %d",a);
}
