#include <stdio.h>

int total_ways_wrapper(int cr,int cc, int m, int n)
{
    // Type your code
  if(cr==m-1&&cc==n-1)
  {
    return 1;
  }
  else if(cr>m-1||cc>n-1)
  {
    return 0;
  }
  else
  {
    int ways=total_ways_wrapper(cr,cc+1,m,n)+total_ways_wrapper(cr+1,cc,m,n);
    return ways;
  }
}

int main() {
	//code
	int m,n,cr=0,cc=0;
	scanf("%d %d", &m, &n);
	
	printf("%d",total_ways_wrapper(cr,cc,m,n));
	return 0;
}
