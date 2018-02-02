#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    int i,count=0;
    printf("\nEnter the string");
    scanf("%s",a);
    for(i=0;i<strlen(a)&&strlen(b);i++)
    {
        b[i]=a[i];
    }
    for(i=strlen(a);i>=0;i--)
    {
        printf("%c",a[i]);
    }
    for(i=0;i<strlen(a)&&strlen(b);i++)
    {
        if(a[i]!=b[i])
        count++;
    }
        if(count==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
