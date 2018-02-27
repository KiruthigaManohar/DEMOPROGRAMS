#include<stdio.h>
int sum(int n);
void main()
{
int a,num;
printf("Enter the number");
scanf("%d",&a);
num=div(a);
printf("%d",num);
}
int div(int x)
{
	if(x%2!=1)
	{
		x=x/2;
		return div(x);
	}
	else
	{
		return x;
	}
}
