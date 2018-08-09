#include<stdio.h>
int main()
{
	int i,j,k=0,n,c=0,count,a[100],l;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=1;i<k;i++)
	{
		count=0;
		for(j=2;j<=k;j++)
		   {
					  l=j*j;
					  if(a[i]%l==0)
					  {
					  count++;
					  }
				}
					if(count==0)
					{
					c++;
				}
				}
				printf("%d",c);
}

