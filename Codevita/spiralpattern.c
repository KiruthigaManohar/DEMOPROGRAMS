#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,a[100][100];
    scanf("%d",&n);
    int count=0;
    int r=ceil((double)n/2);
    for(i=0;i<r;i++)
    {
        for(j=i;j<=n-i-1;j++)
        {
            a[i][j]=++count;
        }
        for(j=i+1;j<=n-i-1;j++)
        {
            a[j][n-i-1]=++count;
        }
        for(j=n-i-2;j>=i;j--)
        {
            a[n-i-1][j]=++count;
        }
        for(j=n-i-2;j>i;j--)
        {
            a[j][i]=++count;
        }
    }

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
}
