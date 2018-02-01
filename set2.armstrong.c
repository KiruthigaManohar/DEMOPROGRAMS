#include<stdio.h>
void main()
{
    int n,r,sum=0,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(a==sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
