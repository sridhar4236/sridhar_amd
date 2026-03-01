/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
9. Print the below pattern

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*************************************************/


#include <stdio.h>

int main()
{
    int i = 1, j = 1, n = 5;

    // outer loop to control the number of rows
    do {
        j = 1;

        // inner loop to print the same number in each row
        do {
            // print the value based on reverse row index
            printf("%d ", (n + 1) - i);
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



