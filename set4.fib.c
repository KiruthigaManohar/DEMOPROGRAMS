#include<stdio.h>
void main()
{
    int z,x=0,y=1,n,i=1;
   
    printf("Enter the limit\t\n");
    scanf("%d",&n);
     printf("Fibonacci Series\n %d\n%d",x,y);
    do{
        z=x+y;
        printf("\n%d\n",z);
        x=y;
        y=z;
        
        i++;
    }while(i<=n);
    
}
