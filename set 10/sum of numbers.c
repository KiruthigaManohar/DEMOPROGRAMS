#include<stdio.h>
void main()
{
	int n,a[50],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	sum=sum+a[i];
   }
   printf("Sum of numbers:%d",sum);
}
