#include<stdio.h>
void main()
{
int n,a[n],i,sum=0,median;
printf("Enter the Nth element");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
median=sum % n;
printf("%d",median);
}
