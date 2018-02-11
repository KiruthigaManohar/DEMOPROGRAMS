#include<stdio.h>
void main()
{
     const int a;
    printf("Enter the values of a");
    scanf("%d",&a);
    printf("The value of a is %d",a);
    pointer(&a);
    printf("\nThe value of a is %d",a);
}
pointer (int *c)
{
    *c=20;
}
