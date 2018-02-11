#include<stdio.h>
void pointer(int**,int**);
void main()
{
    int a,b,*c,*d;
    c=&a,d=&b;
    printf("Enter the values of a and b");
    scanf("%d\t%d",&a,&b);
    pointer(&c,&d);
}
void pointer (int **x,int **y)
{ 
    **x=**x+**y;
    printf("The addition value %d",**x);
}
