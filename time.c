#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("Enter  first time in hours and minutes:");
    scanf("%d%d",&a,&c);
    printf("Enter second time in hours and minutes:");
    scanf("%d%d",&b,&d);
    e=a-b;
    f=c-d;
    printf("The difference is %d%d\t",e,f);
    
}
