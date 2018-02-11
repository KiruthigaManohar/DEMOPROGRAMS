#include<stdio.h>
swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d\t%d",&a,&b);
    printf("Values before swapping\t \n %d\t%d",a,b);
    swap(&a,&b);
}
swap(int *x,int *y)
{
    int *temp;
    *temp=*x;
    *x=*y;
    *y=*temp;
    printf("\nValues after swapping\n %d\t%d",*x,*y);
}
