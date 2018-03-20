#include<stdio.h>
int main()
{
	int a[100],n,i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
  for(i=0;i<n;i++)
  {
  	if(a[i]<n)
  	{
  		printf("%d\t",a[i]);
  		
	  }
  }
  return 0;
}
