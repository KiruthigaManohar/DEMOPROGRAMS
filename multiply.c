#include<stdio.h>
void main()
{
int n,i,x,y;
printf("Enter the number to multiplicate");
scanf("%d",&n);
printf("Enter the limit of  number");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
y=n*i;
printf("%d * %d = %d\n",n,i,y);
}
}
