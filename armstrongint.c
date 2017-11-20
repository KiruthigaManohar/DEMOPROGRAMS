#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum,i,l;
printf("Enter the number");
scanf("%d",&n);
printf("Enter the end point");
scanf("%d",&l);
for(i=n;i<=l;i++)
{
r=i%10;
sum=sum+r*r*r;
i=i/10;
if(sum==i)
{
printf("%d",i);
}
}
getch();
}
