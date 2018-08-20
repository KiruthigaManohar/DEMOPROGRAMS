#include<stdio.h>
int main()
{
    int n,a[100],i,gcd,t,j,count=0,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
   
   for(i=1;i<=min;i++)
   {
      count=0;
      for(j=0;j<n;j++)
      {
           if(a[j]%i==0)
           {
               count++;
           }
       }
   
           if(count==n)
           {
              gcd=i;
           }
          
       }
      printf("%d",gcd);
}
