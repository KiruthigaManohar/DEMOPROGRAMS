#include<stdio.h>
void main()
{
    int n,count,j,i;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1");
        }
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf(",%d",i);
        }
    }
    
}
