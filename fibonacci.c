#include<stdio.h>
void main()
{
    int c,a=0,b=1,n,i=1;
   
    printf("Enter the limit\t\n");
    scanf("%d",&n);
     printf("Fibonacci Series\n %d%d",a,b);
    do{
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
        i++;
    }while(i<=n);
    
}
