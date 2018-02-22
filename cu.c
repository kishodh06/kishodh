#include<stdio.h>
int main()
{
    int l,b,h,a,c;
    scanf("%d%d%d",&l,&b,&h);
    a=l*b*h;
    printf("\n Volume of cuboid: %d",a);
    c=2*((l*b)+(l*h)+(b*h));
    printf("\n Total surface area: %d",c);
}
