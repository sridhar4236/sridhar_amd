/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
12. Without using nested loops :

*
* *
* * *
* * * *
* * * * *


*************************************************/


#include <stdio.h>

int main()
{
    int n = 5, i = 1, j = 1, s;

    // initialize the number of stars to print per row
    s = 1;

    // loop until all rows are printed
    while (i <= n)
    {
        // print stars for the current row
        if (j <= s)
        {
            printf("*");
            j++;
        }
        else
        {
            // move to the next line after printing stars
            printf("\n");

            // go to the next row
            i++;

            // increase the number of stars for the next row
            s++;

            // reset column counter
            j = 1;
        }
    }

    return 0;
}



