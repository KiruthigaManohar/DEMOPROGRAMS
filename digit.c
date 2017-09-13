#include<stdio.h>
#include<conio.h>
void main()
{
long n,count=0;   																		
printf("Enter the integer"); 
scanf("%d",&n);
while(n!='\0')
{
n=n/10;
count++;
}
printf("The number of digits are %d",count);
}
