#include<stdio.h>
#include<conio.h>
void main()
{
int x,a[n],temp,i,j;
printf("Enter the Nth number");
scanf("%d",&x);
printf("Enter the array elements");
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<x-1;i++)
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
printf("The maximum element is %d",a[x-1]);
}
