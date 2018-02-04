#include<stdio.h>
void main()
{
    int hr,min;
    printf("Enter time in minutes");
    scanf("%d",&min);
    hr=min/60;
    printf("%d\t",hr);
     min=min%60;
    printf("\t%d",min);
    
    
    
}
