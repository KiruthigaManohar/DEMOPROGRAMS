#include<stdio.h>
void main()
{
char a[50];
int i,count=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='0'||a[i]!='1')
count++;
}
if(count==0)
printf("No");
else
printf("Yes");
}
