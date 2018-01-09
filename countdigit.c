#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],count=0,i;
printf("Enter the number");
for(i=0;i<100;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<100;i++)
{
if(a[i]!='\0')
{
count++;
}
}
printf("%d",count);
}
