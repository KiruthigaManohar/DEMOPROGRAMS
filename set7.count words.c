#include<stdio.h>
#include<string.h>
void main()
{
char string[50];
int count=0,i;
printf("Enter your sentence\t");
scanf("%[^\n]s",string);
for(i=0;string[i]!='\0';i++)
{
  if(string[i]==' ')
  {
count++;
}
}
printf("%d",count+1);
}
