#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
 int a,b,t;
a=atoi(argv[1]);
b=atoi(argv[2]);
/*t=a;
a=b;
b=t;
*/
a=a+b;
b=a-b;
a=a-b;
printf("%d %d",a,b);
}
