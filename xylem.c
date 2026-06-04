#include <stdio.h>
int main ()
{
    int num , rem , temp , summ , sumo , last ,first;
    printf("Enter a number : ") ;
    scanf("%d",&num) ;
    temp = num ;
    summ = 0 ;
    sumo = 0 ;
    last = temp%10 ;
    temp = temp/10 ;
    for ( ; temp>=10 ; temp=temp/10 )
    { rem = temp%10 ;
        summ = summ + rem ;
    }
    first = temp ;
    sumo = first + last ;
    if (sumo == summ)
    { 
        printf("%d is a xylem number \n",num) ;
     }
    else
    {
        printf("%d is not a xylem number \n",num) ;
    }
    return 0 ;
}