/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
10. Print the below pattern

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*
*************************************************/


#include <stdio.h>

int main()
{
    int i = 1, j = 1, n = 5;

    // outer loop to control the number of rows
    do {
        j = 1;

        // inner loop to print decreasing numbers starting from n
        do {
            printf("%d ", (n + 1) - j);
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



