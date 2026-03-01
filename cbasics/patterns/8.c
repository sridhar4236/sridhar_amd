/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
8. Print the below pattern

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1


*************************************************/


#include <stdio.h>

int main()
{
    int i, j, n = 5;

    // loop through each row
    for (i = 1; i <= n; i++)
    {
        // loop through each column in the current row
        for (j = 1; j <= i; j++)
        {
            // print 1 if both row and column are even or both are odd
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
                printf("1 ");
            
            // print 0 if one is even and the other is odd
            if ((i % 2 != 0 && j % 2 == 0) || (i % 2 == 0 && j % 2 != 0))
                printf("0 ");
        }

        // move to the next line after each row
        printf("\n");
    }

   
    return 0;
}






