#include<stdio.h>
#include<string.h>
void main()
{
char str[20],i,count=0;
printf("Enter your sentence");
for(i=0;i<20;i++)
{
scanf("%c",&str[i]);
}
for(i=0;i<20;i++)
{
count++;
}
printf("%d",count);
}
