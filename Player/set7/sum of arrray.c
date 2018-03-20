#include<stdio.h>
int main()
{
	int a[100],i,n,k,sum=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	if(sum==k)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
