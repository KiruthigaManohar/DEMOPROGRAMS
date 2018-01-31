#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i,count=0;
    printf("\nEnter the two strings");
    scanf("%s\n%s",a,b);
    for(i=0;i<strlen(a)&&strlen(b);i++)
    {
    if(a[i]!=b[i])
    {
        count++;
    }
}
if(count==1)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
