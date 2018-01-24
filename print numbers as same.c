#include<stdio.h>
void main()
{
    int n,a[10],i=0,b,s,r;
    printf("Enter the number of digits");
    scanf("%d",&b);
    printf("Enter the numbers");
    scanf("%d",&n);
    while(i<b)
    {
        s=n%10;
        a[i]=s;
        n=n/10;
        i=i+1;
    }
      for(i=b-1;i>=0;i--)
    {
    printf("%d\t",a[i]);
    }
}
