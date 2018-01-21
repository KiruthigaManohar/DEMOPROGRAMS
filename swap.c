#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nAfter swapping %d %d",a,b);

}
