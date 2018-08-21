#include<stdio.h>
int main()
{
    int n,m=1,i,j,fact,a=0,b=1,c;
    scanf("%d",&n);
    for(i=0;i<n*2;i++)
    {
       if(i%2==0)
       {
      
        fact=1;
       // printf("%d",fact);
        for(j=1;j<=m;j++)
        {
            fact=fact*j;
         //   printf("k%d",fact);
        }
        m++;
        printf("%d ",fact);
      }
      else
      {
         if(i==1)
         {
             printf("%d ",a);
         }
         else if(i==3)
         {
             printf("%d ",b);
         }
         else
         {
             c=a+b;
             printf("%d ",c);
             a=b;
             b=c;
         }
      }
    }
}
