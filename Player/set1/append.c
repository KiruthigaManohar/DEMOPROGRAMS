#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l;
    printf("Enter the string");
    scanf("%s",s);
    l=strlen(s);
    s[l]='.';
    printf("%s",s);
    
}
