#include <stdbool.h>
#include <stdio.h>
int main ()
{
    int num , temp ,rem ; 
    bool istrue = true ;
for ( num = 0 ; num <200 ; num++)
{ 
    istrue = true ;
    temp = num ;
    while (temp>0) 
    { 
        rem = temp%10 ;
        if (rem%2!=0) 
        { 
            istrue = false ;
            break ;
        }
        temp = temp/10 ;
    }
    if (istrue) 
    { 
        printf("%d is purely even \n",num) ;
    }
    else 
    { 
        printf("%d is not purely even \n",num) ;
}
}
}