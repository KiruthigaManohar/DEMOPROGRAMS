#include<stdio.h>
void main()
{
	int a[50],n,k,i,count=0;
	printf("Enter the size:\t");
	scanf("%d",&n);
	printf("Enter the number to be searched:\t");
	scanf("%d",&k);
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]==k)
	{
		count++;
	}
}
if(count!=0)
{
	printf("Number exists");
	
}
	else
	{
			printf("Number does not exists");
}
}
