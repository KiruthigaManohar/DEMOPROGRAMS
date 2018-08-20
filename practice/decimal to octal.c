#include<stdio.h>
int main()
{
	int n,a[100],k=0,i;
	scanf("%d",&n);
	while(n>0)
	{
		a[k]=n%8;
		k++;
		n=n/8;
    }
    for(i=k-1;i>=0;i--)
    {
    	printf("%d",a[i]);
	}
}
