#include<stdio.h>
void main()
{
    int base=2,n,i,sum=1,count=0;
    scanf("%d",&n);
    while(n!=1)
    {
        n=n/2;
        count++;
    }
    for(i=1;i<=count+1;i++)
    {
        sum=sum*base;
     }     printf("%d",sum);
        
}
