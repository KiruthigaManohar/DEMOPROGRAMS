#include<stdio.h>
int main()
{
	int a[100],n,k,i,j,t;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
  for(i=0;i<n;i++)
  {
  	if(a[i]<k)
  	{
  		printf("%d",a[i]);
  		
	  }
  }
  return 0;
}
