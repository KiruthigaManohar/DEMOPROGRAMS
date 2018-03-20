#include<stdio.h>
void main()
{
   int n,k,r,count=0;
   scanf("%d",&n);
   scanf("%d",&k);
   while(n!=0)
   {
       r=n%10;
       if(r==k)
       {
           count++;
    }
       n=n/10;
          
    }
       printf("\n%d",count);
}
