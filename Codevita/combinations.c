#include <stdio.h>

void printCombinationsWrapper(int a[] , int n ,int s[],int visit );

#define SIZE 10
int s[10]={};
int main() {
    int arr[SIZE], n, i,visit;

    // size of the array 
    scanf("%d ", &n);

    //Input the array ealements
    for(i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    //Function call to search in the sorted rotated array
    printCombinationsWrapper(arr, n,s,visit);
    return 0;
}

void printCombinationsWrapper(int a[], int n,int s[],int visit)
{
  int i;
  if(visit==n)
  {
    for(i=0;i<n;i++)
    {
      if(s[i]==1)
      {
        printf("%d,",a[i]);
      }
    }
    printf("\n");
  
  return;
  }
  s[visit]=1;
  printCombinationsWrapper(a,n,s,visit+1);
  s[visit]=0;
  printCombinationsWrapper(a,n,s,visit+1);
}
