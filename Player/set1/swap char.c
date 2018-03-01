#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l,i,temp;
    printf("Enter the string");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(i%2==0)
        {
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
        }
    }
    printf("%s",s);
    
}
