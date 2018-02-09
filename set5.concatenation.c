#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int l,i;
    scanf("%s",a);
    scanf("%s",b);
    l=strlen(a);
    for(i=0;b[i]!='\0';i++,l++)
    {
        a[l]=b[i];
        
    }
    printf("%s",a);
    
}
