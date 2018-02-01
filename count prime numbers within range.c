#include<stdio.h>
void main()
{
    int i,j,a,b,count,sum=0,count1=0;
    printf("Enter the start point");
    scanf("%d",&a);
    printf("Enter the end point");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            count1++;
          
        }

    }
    printf("%d",count1);
    
}
