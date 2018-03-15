#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]=='x')
{
s[i]='A';
}
else if(s[i]=='B')
{
s[i]='B';
}
else if(s[i]=='C')
{
s[i]='C';
}
else
{
        s[i]=s[i]+3;
 }  
    printf("%c",s[i]);
}
}
