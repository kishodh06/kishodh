#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("\n  Before Swapping The Numbers are %d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n After swapping the numbers are %d %d",a,b);
}
