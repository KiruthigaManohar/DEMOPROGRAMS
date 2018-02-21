#include<stdio.h>
#include<math.h>
void main()
{
float p,t,r,si;
scanf("%f%f%f",&p,&t,&r);
si=(p*t*r)/100;
printf("%.1f",floor(si));
}
