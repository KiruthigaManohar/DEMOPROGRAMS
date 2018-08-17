#include<stdio.h>
#include<stdlib.h>
int fib(int,int,int,int,int);
int main(int argc,char*argv[])
{
    int n, f=0,s=1,t=0,i=3;
    n=atoi(argv[1]);
    printf("%d %d ",f,s);
    fib(n,f,s,t,i);
}
int fib(int n,int f,int s,int t,int i)
{

    if(i<=n)
    {
        t=f+s;
        printf("%d ",t);
        f=s;
        s=t;
        i++;
        fib(n,f,s,t,i);
        
    }
    else
    {
        return 0;
    }
}
