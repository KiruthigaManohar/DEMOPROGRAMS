#include<stdio.h>
void main()
{
    int n,s=1,k=2,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*k;
        if(s==n)
        {
           count++;
        }
 }
   
    if(count==1)
    {
        printf("Yes");
    }
    else if(n==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
