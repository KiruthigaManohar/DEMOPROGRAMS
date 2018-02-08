#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,count=0,l,j;
    scanf("%s",a);
    l=strlen(a);
    for(i=0,j=l-1;a[i]!='\0';i++,j--)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
    if(count==l)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not a pallindrome");
    }
}
