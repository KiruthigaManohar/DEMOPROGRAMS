#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a^=b^=a^=b;
    printf("\nAfter swapping");
    printf("\n%d\t%d",a,b);
}
