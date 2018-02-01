#include<stdio.h>
void main()
{
int a,b,r,sum,c,i;
printf("Enter the range");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{sum =0;
c=i;
r=i%10;
sum=sum+r*r*r;
i=i/10;
if(c==sum)
{
    printf("%d",sum);
}
}

}
