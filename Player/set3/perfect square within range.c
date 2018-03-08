#include<stdio.h>
void main()
{
	int i,j,a,b,count=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(j*j==i)
		{
			count++;
        }
        }
	}
		printf("%d\t",count);
}
