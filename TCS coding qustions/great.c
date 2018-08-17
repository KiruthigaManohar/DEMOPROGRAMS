
#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[]) {
   int a,b;
   a=atoi(argv[1]);
   b=atoi(argv[2]);
   printf("%d",a>b?a:b);
}
    
