#include<stdio.h>
void main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=n-1;i>1;i--)
    {
        if(n%i==0)
        count++;
    }
    if(count!=0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
