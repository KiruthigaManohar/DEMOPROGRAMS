#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int l,i,temp;
    printf("Enter the string");
    //scanf("%[^\n]s",a);
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]== ' ')
        {
        	if(a[i+1]>='a'&&a[i+1]<='z')
        	a[i+1]=a[i+1]-32;
        	else
        		a[i+1]=a[i+1]+32;
        	
		}
    }
    printf("%s",a);
    
}
