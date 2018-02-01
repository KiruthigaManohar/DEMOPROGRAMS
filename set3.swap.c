#include<stdio.h>
void main()
{
int i,j,temp;
printf("Enter the two numbers");
scanf("%d%d",&i,&j);
temp=i;
i=j;
j=temp;
printf("\nAfter swapping %d %d",i,j);

}
