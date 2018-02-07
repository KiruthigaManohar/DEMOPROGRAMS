#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,count=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
        count++;
    }
    }
if(count!=0)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
