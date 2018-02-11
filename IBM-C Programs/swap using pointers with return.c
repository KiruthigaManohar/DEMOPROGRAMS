#include<stdio.h>
int swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d\t%d",&a,&b);
    printf("Values before swapping\t \n %d\t%d",a,b);
    swap(&a,&b);
    printf("\nValues after swapping\n %d\t%d",a,b);
}
int swap(int *x,int *y)
{
    int *temp;
    *temp=*x;
    *x=*y;
    *y=*temp;
    return 0;
}
