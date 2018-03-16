#include<stdio.h>
void main()
{
	char a[100];
	int count=0,l,i;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
