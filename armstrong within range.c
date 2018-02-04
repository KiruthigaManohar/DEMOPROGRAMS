#include<stdio.h>
void main()
{
    int a,b,i,sum,c,r;
    printf("Enter the range");
    scanf("%d\t%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=0;
        c=i;
    
        while(c!=0)
        {
            r=c%10;
            sum=sum+r*r*r;
            c=c/10;
        }
    
       if(i==sum)
        {
            printf("%d\n",i);
        }

    }
}
