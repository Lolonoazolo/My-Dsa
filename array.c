#include <stdio.h>

int main()
{
    int num, rem, temp, summ, sumo, last, first, ar[10], count = 0;

    for(num = 1; count < 10; num++)
    {
        temp = num;
        summ = 0;

        last = temp % 10;
        temp = temp / 10;

        for(; temp >= 10; temp = temp / 10)
        {
            rem = temp % 10;
            summ = summ + rem;
        }

        first = temp;
        sumo = first + last;

        if(sumo == summ)
        {
            ar[count] = num;
            count++;
        }
    }

    printf("The first 10 xylem numbers are:\n");

    for(count = 0; count < 10; count++)
    {
        printf("%d\n", ar[count]);
    }

    return 0;
}