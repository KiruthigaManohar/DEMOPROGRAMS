#include<stdio.h>
int main()
{
	int r,n,rev,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d\n",rev);
	while(rev>0)
	{
		r=rev%10;
		sum=sum+r;
		rev=rev/100;
	}
	printf("%d",sum);
}
