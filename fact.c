#include<stdio.h>
void main()
{
int s=1,a,n;
printf("Enter the number:\t");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
s=s*a;
}
printf("The factorial of a given number =\t%d",s);
}
