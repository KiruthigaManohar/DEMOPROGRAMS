#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the start number:\t");
scanf("%d",&a);
printf("Enter the end point");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d",i)
}
}
getch();
}
