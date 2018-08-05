#include <stdio.h>
#include<stdlib.h>
#define MAX_ELEMENTS 40
int count=0;
int is_combination_with_sum_exist_wrapper(int a[], int n, int sum_val,int visit,int select[])
{
  int i,sum=0;
  if(visit==n)
  {
    for(i=0;i<n;i++)
    {
      if(select[i]==1)
      {
        sum=sum+a[i];
      }
    }
    if(sum==sum_val)
    {
      count++;
    }
sum=0;
return count;
  }

select[visit]=1;
is_combination_with_sum_exist_wrapper(a,n,sum_val,visit+1,select);
select[visit]=0;
is_combination_with_sum_exist_wrapper(a,n,sum_val,visit+1,select);
return 0;
}
int main()
{
 
   int visit=0,select[MAX_ELEMENTS]={};
    int a[MAX_ELEMENTS], n, i;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int sum_val;
    scanf("%d", &sum_val);
    
    is_combination_with_sum_exist_wrapper(a, n, sum_val,visit,select);
    if(count==0)
    {
            printf("Combination Found = 0");
    }
    else
    {
            printf("Combination Found = 1");
    }
}
