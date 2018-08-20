#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int b[100],i,k=0,l,sum=0;

	scanf("%s",a);
		l=strlen(a);
	for(i=0;i<l;i++)
	{
		switch(a[i])
		{
			case 'I':b[k]=1;k++;break;
			case 'V':b[k]=5;k++;break;
			case 'X':b[k]=10;k++;break;
			case 'L':b[k]=50;k++;break;
			case 'C':b[k]=100;k++;break;
			case 'D':b[k]=500;k++;break;
			case 'M':b[k]=1000;k++;break;
		}
}
sum=b[l-1];
	for(i=l-1;i>0;i--)
	{
		if(b[i-1]>=b[i])
		{
		
			sum=sum+b[i-1];
		
		}
		else
		{
	
			sum=sum-b[i-1];
		}
		
	}
printf("%d",sum);
}
