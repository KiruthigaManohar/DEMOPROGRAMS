#include<stdio.h>
void main()
{
    int x,a,d,sum=0,i;
    printf("Enter the no.of terms ");
    scanf("%d",&x);
    printf("Enter the 1st term and difference");
    scanf("%d%d",&a,&d);
    for(i=1;i<=x;i++)
    {
        printf("%d",a);
        sum=sum+a;
        a=a+d;
    }
    printf("\n%d",sum);
}
