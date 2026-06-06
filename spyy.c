#include <stdio.h>
#include <math.h>
int main()
{
    int num=0 , rem , digit=0 , temp , arm ,sum = 0 , count = 0 ,prd =1;
    printf ("Enter a number = ") ;
    scanf ("%d" , &num) ;
        temp = num ;
        while (temp>0)
        {
            temp /= 10 ;
            digit++ ;
        }
     arm=num ;
     sum=0 ;
     prd = 1 ;
    for ( ; arm>0 ; arm/=10)
    {
    rem = arm % 10 ;
    sum = sum + pow (rem , digit) ;
    prd = prd * rem ;
    }
if (sum==num && prd==sum)
    {
        printf ("%d is a spy number and an armstrong number as well " , num) ;
    }
else if (sum==num && prd!=sum)
    {
        printf ("%d is an armstrong number but not a spy number " , num) ;
    }
else if (sum!=num && prd==sum)
    {
        printf ("%d is a spy number but not an armstrong number " , num) ;
    }
else
    {
        printf ("%d is neither a spy number nor an armstrong number " , num) ;
    }
return 0 ;
}
