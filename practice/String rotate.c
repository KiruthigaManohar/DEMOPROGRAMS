#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100];
	int i,l,temp;
	scanf("%[^\n]s",str);
	l=strlen(str);
	*str1=*str;
		temp=str[l-1];
	for(i=l-1;i>=0;i--)
	{
	    str[i]=str[i-1];
	}
	str[0]=temp;
	printf("%s",str);
	

}
