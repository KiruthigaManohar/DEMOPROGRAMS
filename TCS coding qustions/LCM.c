

#include<stdio.h>
#include<stdlib.h>
 
int main(int argc, char *argv[]) 
{
   int a,b,t,gcd,lcm;
   a=atoi(argv[1]);
   b=atoi(argv[2]);
   if(a>b)
   t=b;
   else
   t=a;
  while(t>0)
  {
     if(a%t==0&&b%t==0)
   {
       gcd=t;
       break;
   }
   else
   {
       t--;
   }
}
    printf("%d",a*b/gcd);
}
