#include<stdio.h>
int main()
{
    int hr1,min1,sec1,hr2,min2,sec2,sec3,min3,hr3;
    scanf("%d%d%d",&hr1,&min1,&sec1);
    scanf("%d%d%d",&hr2,&min2,&sec2);
    if(sec1>sec2)
    {
        sec3=sec1-sec2;
    }
    else
    {
        min1=min1-1;
        sec1=60+sec1;
        sec3=sec1-sec2;
        
    }
    if(min1>min2)
    {
        min3=min1-min2;
    }
    else
    {
        hr1=hr1-1;
        min1=min1+60;
        min3=min1-min2;
        
    }
    if(hr1>hr2)
    {
        hr3=hr1-hr2;
    }
    else
    {
        hr3=hr2-hr1;
    }
    printf("%d:%d:%d",hr3,min3,sec3);
}
