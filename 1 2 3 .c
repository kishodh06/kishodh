#include<stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("Yes",n);
    else
        printf("No",n);
    return 0;
}
