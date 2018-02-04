#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
a^=b^=a^=b;
printf("\nAfter swapping %d %d",a,b);

}

    
