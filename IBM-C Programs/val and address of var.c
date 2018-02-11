#include<stdio.h>
void main()
{
    int a=5,*e;
    float b=6.5, *f;
    char c='k',*g;
    double d=45,*h;
    e=&a;f=&b;g=&c;h=&d;
    printf("\nThe value of  a is %d",a);
     printf("\nThe address of  a is %p",a);
      printf("\nThe value of  e is %d",e);
    printf("\nThe address of  e is %p",e);
     printf("\nThe value of  b is %f",b);
      printf("\nThe address of  b is %p",b);
    printf("\nThe value of  f is %d",f);
    printf("\nThe address of  f is %p",f);
     printf("\nThe value of  c is %c",c);
      printf("\nThe address of  c is %p",c);
       printf("\nThe value of  g is %d",g);
       printf("\nThe address of  g is %p",g);
        printf("\nThe value of  d is %lf",d);
         printf("\nThe address of  d is %p",d);
      printf("\nThe value of  h is %d",h);
      printf("\nThe address of  h is %p",h);
}
