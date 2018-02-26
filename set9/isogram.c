#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,count=0;
	printf("Enter the string");
	scanf("%s",a);

	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
	if(a[i]==a[j])
	{
		count++;
		
	
		
	}
	}
	
}
	if(count==0)
	{
		printf("Isogram");
	}
	else
	{
		printf("Not an isogram");
	}
	return 0;
}
