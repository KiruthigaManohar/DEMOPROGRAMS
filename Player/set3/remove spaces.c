#include<stdio.h>
void main()
{
char s[50];
int i;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
	if(s[i]!=' ')
	{
		printf("%c",s[i]);
	}
}
}
