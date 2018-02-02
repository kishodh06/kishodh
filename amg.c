#include<stdio.h>
void main()
{
    int a[10],b,j,k,temp;
    printf("Enter the limit: ");
    scanf("%d",&k);
    printf("Enter the numbers:");
    for(b=0;b<k;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<k;b++)
    {
        for(j=b+1;j<=k;j++)
        {
    if(a[b]>a[j])
    {
        temp=a[b];
        a[b]=a[j];
        a[j]=temp;
    }
        }
    }
    printf("%d\t",a[k-1]);
}
