#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=r-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
         printf("\n");
    }
   
}
