/*the program checks for the 17th armstrong number in the armstrong series , */\
#include <stdio.h>
#include <math.h>
int main ()
{
    int num=0 , rem , digit=0 , temp , arm ,sum = 0 , count = 0 ;
    for (num=0 ;  ; num++)
    {
        digit = 0 ;
        temp = num ;
        while (temp>0)
        {
            temp /= 10 ;
            digit++ ;
        }
     arm=num ;
     sum=0 ;
    for ( ; arm>0 ; arm/=10)
    {
    rem = arm % 10 ;
    sum = sum + pow (rem , digit) ;
    if (sum==num)
    {
        count++ ;
        if (count==17)
        {
            printf ("The 17th armstrong number is %d " , num) ;
            break ;
        }
    }
    }   
}
return 0 ;
}