#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    temp=((a)*(b)%(c));
    printf("The answer is: %d",temp);
}
