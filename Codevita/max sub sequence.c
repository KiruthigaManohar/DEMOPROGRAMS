#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,r,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=a[0];
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            r=r+a[i];
        }
        else
        {
            
           r=a[i];
        }
        if(m<r)
        {
            m=r;
        }
    }
   
    printf("%d",m);
}
