#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[n],temp,i,j;
printf("Enter the Nth number");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The maximum element is %d",a[n-1]);
}
