#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the number\n");
scanf("%d\t %d \t%d\t",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("A is bigger");
else
printf("C is bigger");
}
else
printf("B is bigger");
}
}
