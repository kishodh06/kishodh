#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,pow,c=1,n;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Enter power:");
    scanf("%d",&pow);
    for(n=1;n<=pow;n++)
    {
        c=c*num;
    }
    printf("%d to the power of %d is%d",num,pow,c);
    return 0;
}
