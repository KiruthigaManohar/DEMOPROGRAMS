#include<stdio.h>
void main()
{
    int n,j,count=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        if(n%j==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
