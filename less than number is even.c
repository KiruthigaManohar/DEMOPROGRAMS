#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n);
    }
    else
    {
        n--;
        if(n%2==0)
        {
            printf("%d",n);
        }
    }
}
