#include<stdio.h>
void main()
{
    int a,b,n;
    printf("Enter the start and end point");
    scanf("%d%d",&a,&b);
    printf("Enter the number to check");
    scanf("%d",&n);
    if(n>=a&&n<=b)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
}
