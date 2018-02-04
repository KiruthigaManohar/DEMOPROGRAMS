#include<stdio.h>
void main()
{
    int hr,hr1,hr2,min,min1,min2;
    scanf("%d\t%d",&hr,&min);
    scanf("%d\t%d",&hr1,&min1);
    if(hr>hr1)
    {
    hr2=hr-hr1;
    min2=min-min1;
    printf("%d\t%d",hr2,min2);
    }
    else
    {
    hr2=hr1-hr;
    min2=min1-min;
    printf("%d\t%d",hr2,min2);
    }
}
