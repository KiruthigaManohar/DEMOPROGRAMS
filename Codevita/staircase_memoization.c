#include <stdio.h>
int find_total_ways(int n)
{
   int result[n+1],cs=0,i;
  for(i=0;i<=n;i++)
  {
    result[i]=-1;
  }
  int val=ways(cs,n,result);
  return val;
}
int ways(int cs,int n,int result[])
{
  int tot;
  if(cs>n)
  {
    return 0;
  }
  else if(cs==n)
  {
    return 1;
  }
  if(result[cs]!=-1)
  {
    return result[cs];
  }
  else
    tot=ways(cs+1,n,result)+ways(cs+2,n,result);
  result[cs]=tot;
  return tot;
}
int main() {
	//code
	int n;
	scanf("%d", &n);
	printf("%d", find_total_ways(n));
	return 0;
}
