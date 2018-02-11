#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d\t%d",&a,&b);
    pointer(&a,&b);
}
pointer (int *c,int *d)
{ 
    *c=*c+*d;
    printf("The addition value %d",*c);
}
