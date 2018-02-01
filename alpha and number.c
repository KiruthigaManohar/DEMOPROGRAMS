#include<stdio.h>
#include<ctype.h>
 
int main()
{
    char a[50];
    scanf( "%s", &a );
    if( isdigit(a)&&isalpha(a) )
        printf( "Alpha & Numeric character);
    else
        printf( "NOT Alpha & Numeric character: );
    return 0;
}
