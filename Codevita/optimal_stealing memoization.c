#include <stdio.h>

#define MAX_HOUSES 50

#define MAX(a, b) (a>b) ? a : b

int max_stealing_wrapper(int house_values[], int n,int result[],int c)
{
  int stolen,not_stolen,max;
      if(c>=n)
      return 0;
      if(result[c]!=-1)
       return result[c];
    stolen=house_values[c]+max_stealing_wrapper(house_values,n,result,c+2);
  not_stolen=max_stealing_wrapper(house_values,n,result,c+1);
  max=MAX(stolen,not_stolen);
  result[c]=max;
  return result[c];
}

int main() {
	//code
	int n, house_values[MAX_HOUSES], i;
	
	// Total houses
	scanf("%d", &n);
	int result[n+1],c=0;
  for(i=0;i<=n;i++)
  {
    result[i]=-1;
  }
	// Values at each house
	for(i = 0; i < n; i++)
	{
	    scanf("%d", &house_values[i]);
	}
	
	printf("%d", max_stealing_wrapper(house_values, n,result,c));
	return 0;
}
