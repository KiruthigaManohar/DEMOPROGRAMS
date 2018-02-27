#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],i,n,k,l;
	printf("Enter the size of an array");
	scanf("%d",&n);
	printf("Enter the k numbers to print");
	scanf("%d",&k);
	printf("Enter the string");
	scanf("%s",str);
	l=strlen(str);
	for(i=1;i<=k;i++)
	{
		printf("%c",str[l-1]);
		l--;
	}
}
