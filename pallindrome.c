#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0,original;
printf("Enter the number");
scanf("%d",&n);
original=n
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(original==sum)
{
printf("The number is pallindrome);
else
{
printf("Not pallindrome");
}
getch();
}
