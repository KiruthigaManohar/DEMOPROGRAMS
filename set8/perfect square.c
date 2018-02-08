#include<stdio.h>
void main()
{
    int m,n,count=0,l,i;
    scanf("%d\t%d",&m,&n);
    l=m*n;
    printf("%d\n",l);
    for(i=1;i<=l;i++)
    {
        if((i*i)==l)
        {
           count++;
        }
    }
    if(count==1)
    {
        printf("perfect square");
    }
    else
    {
        printf("Not a  perfect square");
    }
}
