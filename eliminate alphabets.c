#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,n;
    
    scanf("%s",str);
    n=strlen(str);
    for(i=n-1;str[i]!='\0';i--)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        {
        printf("%c",str[i]);
        }
        
        
    }
    
}
