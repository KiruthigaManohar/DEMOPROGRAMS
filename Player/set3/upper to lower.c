#include<stdio.h>
void main()
{
char s[50];
int i;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
	if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='z')
	{
	   if(s[i]>='a'&&s[i]<='z')
	   {
	   	s[i]=s[i]-32;
	   }
	   else
	   {
	   	s[i]=s[i]+32;
	   }
	}
}
printf("%s",s);
}
