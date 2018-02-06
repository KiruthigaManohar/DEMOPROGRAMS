#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b='*';
    int i=0,l,m;
    scanf("%s",a);
    l=strlen(a);
    m=l/2;
    while(a[i]!='\0')
    {
    if(i!=m)
    {
        printf("%c",a[i]);
        
    }
    else
    {
        printf("%c",b);
    }
    i++;
    }
}
