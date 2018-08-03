#include<stdio.h>
int main()
{
    int n,i,a[100],max,sec;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     max=a[0];
    for(i=0;i<n;i++)
    {       
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    sec=0;
    for(i=0;i<n;i++)
    {
        if(sec<a[i]&&a[i]!=max)
        {
            sec=a[i];
        }
        
    }
  printf("%d\n",max);
  printf("%d",sec);
}
