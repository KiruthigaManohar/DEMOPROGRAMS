#include<stdio.h>
#include<string.h>
void main()
{
    int a[50],i,n,k,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			
			if(a[i]==a[j])
			{
				count++;
			}
			
		}
		if(count==1)
		{
			printf("%d\t",a[i]);
		}
	
	}
	}
    
