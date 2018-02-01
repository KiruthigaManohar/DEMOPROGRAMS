#include<stdio.h>
void main()
{
    int a[10],i,j,k,temp;
    printf("Enter the limit ");
    scanf("%d",&k);
    printf("Enter the array");
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
        }
    }
    printf("%d\t",a[k-1]);
}
