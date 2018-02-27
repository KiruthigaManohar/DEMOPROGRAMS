#include<stdio.h>
void main()
{
	int a,ascii=65;
	printf("Enter the number :\t");
	scanf("%d",&a);
	ascii=a+ascii;
	printf("%c",ascii-1);
}
