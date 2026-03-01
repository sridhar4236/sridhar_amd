/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
7. Print the below pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*************************************************/

#include <stdio.h>

int main()
{
    int i = 1, j = 1, n = 5;

    // outer loop to control the number of rows
    do {
        j = 1;

        // inner loop to print numbers from 1 to i
        do {
            printf("%d ", j);
            j++;
        }
        while (j <= i);

        // move to the next line after each row
        printf("\n");
        i++;
    }
    while (i <= n);

    
    return 0;
}





