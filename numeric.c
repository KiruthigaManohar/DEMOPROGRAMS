#include<stdio.h>
#include<ctype.h>
 
int main()
{
    char a;
    scanf( "%c", &a );
    if( isdigit(a) )
        printf( "This is a Numeric character: %c\n", a );
    else
        printf( "This is NOT a Numeric character: %c\n", a );
    return 0;
   }
