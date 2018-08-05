#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m=mp(n);
	printf("%d",m);
}
int mp(int n)
{
	int i,val,r=2;
	if(n==1||n==0||n==2)
	{
		return 0;
	}
	for(i=3;i<n;i++)
	{
		r=r*2+2;
	}  
	return r;
}
