#include<stdio.h>
void main()
{
	int a[50],i,j,x,temp;
	printf("Enter the size of an array");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	printf("%d",a[0]);
}
