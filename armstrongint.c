#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=1,i,l,original;
printf("Enter the number");
scanf("%d",&n);
printf("Enter the end point");
scanf("%d",&l);
for(i=n;i<=l;i++)
{
  original=i;
r=i%10;
sum=sum+r*r*r;
i=i/10;
if(sum==original)
{
printf("%d",original);
}
}
getch();
}
