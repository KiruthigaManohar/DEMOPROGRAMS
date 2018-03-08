#include<stdio.h>
void main()
{
 int a[50],i,k,n,count=0;
 scanf("%d",&k);
 //printf("Enter the size");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
       if(k==a[i])
       {
       	  count++;
	   }
 } 
 if(count>0)
 {
 	printf("Yes");
 }
 else
 {
 	printf("No");
 }
}
