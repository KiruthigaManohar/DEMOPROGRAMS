#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j,count=0,l,m;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        if(a[i]==b[i])
        {
            count++;
        }
       
    }
    l=strlen(a);
    m=strlen(b);
    if(count==l&&count==m)
    printf("Yes");
    else
    printf("No");
   
    /*
    i=strcmp(a,b);
    if(i==0)
    printf("Yes");
    else
    printf("No");
    */
   
   
}
