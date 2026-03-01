/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
13. Print the below Pattern

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*************************************************/


#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    // upper half of the diamond
    for (i = 1; i <= n; i++)
    {
        // print leading spaces
        for (j = 1; j <= (n - i); j++)
        {
            printf("  ");
        }

        // print stars for the current row
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }

        // move to the next line
        printf("\n");
    }

    // lower half of the diamond
    for (i = 1; i < n; i++)
    {
        // print leading spaces
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }

        // print stars for the current row
        for (k = 1; k <= (2 * n - (2 * i + 1)); k++)
        {
            printf("* ");
        }

        // move to the next line
        printf("\n");
    }

    
    return 0;
}



