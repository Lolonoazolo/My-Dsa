#include <stdio.h>

 int main ()
   {
     int a, rem, temp;
     int e, o, p;

     for (a = 0; a < 10000; a++)
     {
         e = 0;
         o = 0;
         p = 0;

         temp = a;
         if (temp == 0)
         {
             e = 1;
         }

         while (temp > 0)
         {
             rem = temp % 10;
             if (rem % 2 == 0)
             {
                 e = e + 1;
             }
             else
             {
                 o = o + 1;
             }
             if (rem == 2 || rem == 3 || rem == 5 || rem == 7)
             {
                 p = p + 1;
             }
             temp = temp / 10;
         }

         if (e == o && e == p)
         {
             printf("\n%d", a);
         }
     }

     return 0;
   }