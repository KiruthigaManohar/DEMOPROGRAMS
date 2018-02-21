#include<stdio.h>
void main()
{
	int n,pro=1,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		pro=pro*r;
		n=n/10;
	}
	printf("%d",pro);
	
}
