#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
int count=0,i;
printf("Enter your sentence\t");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
  if(str[i]>='A'&&str[i]>='Z'||str[i]>='a'&&str[i]>='z')
  {
  }
  else
  {
count++;

}
    
}

printf("%d",count);
}
