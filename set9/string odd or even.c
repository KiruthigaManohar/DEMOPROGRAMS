#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50],c[50];
	int i,n,j,k;
	printf("Enter the string");
	scanf("%s",a);
	n=strlen(a);
	j=0,k=0;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			b[j]=a[i];
			j++;
		}
	
		else
		{
			c[k]=a[i];
			k++;
		}
}
	printf("\nCharacters in Odd position \n %s",b);
	printf("\nCharactes in Even position \n %s",c);
	
}
