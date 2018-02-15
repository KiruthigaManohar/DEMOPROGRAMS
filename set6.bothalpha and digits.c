#include<stdio.h>
void main()
{
    char a[50],i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]>='a'||a[i]<='z'||a[i]>='A'||a[i]<='Z'||a[i]>=0||a[i]<=9)
    {
        count++;
    }
    }
    if(count==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
