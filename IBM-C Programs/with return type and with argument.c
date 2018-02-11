#include<stdio.h>
int square(int);
int rectangle(int,int);
float circle(float);
int  main()
{
    int b,l,a,area,area1;
    float area2;
    float r;
    printf("\nEnter the side of a square");
    scanf("%d",&a);
    area=square(a);
    printf("\nThea area of a square %d",area);
    printf("\nEnter the two values");
    scanf("%d\t%d",&l,&b);
    rectangle(l,b);
     area1=rectangle(l,b);
     printf("\nThea area of a rectangle  %d",area1);
    printf("\nEnter the radius of a circle");
    scanf("%f",&r);

    area2=circle(r);
    printf("\nThe area of a circle  %f",area2);
    return 0;
    
}
int square(int x)

{
  return (x*x);   
  
}
int rectangle(int x,int y)
{
    y=x*y;
    return y;
}
float circle(float x)
{
    float pi=3.14;
    x=pi*x*x;
    return x;
}
