#include<stdio.h>
void main()
{
    int base=2,n,exp,i,sum=1;
    scanf("%d",&n);
    scanf("%d",&exp);
    for(i=1;i<=exp;i++)
    {
        sum=sum*base;
        if(sum==n)
        {
            printf("Yes");
        }
    }
       
    }
