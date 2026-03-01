/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
11. Print the below pattern

1
2    3
4    5   6
7    8   9    10
11  12 13  14  15


*************************************************/


#include <stdio.h>

int main()
{
    int i, j, n = 5, a = 0;

    // loop through each row
    for (i = 1; i <= n; i++)
    {
        // loop through each column in the current row
        for (j = 1; j <= i; j++)
        {
            // increment and print the current number
            a++;
            printf("%d ", a);
        }

        // move to the next line after each row
        printf("\n");
    }

   
    return 0;
}






