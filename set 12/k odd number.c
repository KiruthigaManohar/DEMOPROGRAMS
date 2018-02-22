#include<stdio.h>
void main()
{
	int n,a[50],i,j=0,k,b[50];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	printf("\n%d",b[k-1]);
	
	
}
