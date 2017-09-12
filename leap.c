#include<stdio.h>
#include<conio.h>
void main()
{
  int yr;
  printf("Enter the year");
  scanf("%d",&yr);
  if(yr%4==0&&yr%400==0&&yr%100==0)
  {
  printf("It is leap year");
  }
  else
  {
  printf("It is not an leap year");
}
}
