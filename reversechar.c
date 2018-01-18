#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10],i;
printf("Enter the character");
for(i=0;i<10;i++)
{
    scanf("%c",&str[i]);
}
for(i=10;i>=1;i--)
{
printf("%c",str[i]);
}
}
