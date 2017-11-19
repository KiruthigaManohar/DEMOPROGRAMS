#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
printf("The reverse of a number is %d",sum);
getch();
}
