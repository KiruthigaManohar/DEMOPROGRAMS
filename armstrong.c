#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum,original;
clrscr();
printf("Enter the number");
scanf("%d",&n);
original=n;
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(original==sum)
{
printf("Armstrong number");
}
else
{
printf("Not an armstrong");
}
getch();
}
