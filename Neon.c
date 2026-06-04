#include <stdio.h>
int main ()
{
    long num , rem , sq , sum = 0  ;
    printf("Enter a number = ");
    scanf ("&ld" , &num ) ;

    sq = num * num ;
    for ( ; sq>0 ; sq/=10)
    {
        rem = sq % 10 ;
        sum = sum + rem ; 

    }
    if (sum==num)
    printf ("%ld is a neon number " , num) ;
    else
    printf ("%ld is not a neon number " , num ) ;
    return 0 ;
}