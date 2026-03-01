/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :2.  Write down a macro to find the biggest of four numbers using biggest of 2 macro.
* Sample Input  :Enter Values: 12 13 14 16
* Sample Output :16 is Big
*
*************************************************/

#include <stdio.h>

// define macro to return the maximum of two values
#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main()
{
    int a, b, c, d;

    // prompt user to enter four values
    printf("enter values: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // find the biggest among the four using nested max
    int biggest = MAX(MAX(a, b), MAX(c, d));

    // print the result
    printf("%d is big", biggest);

    return 0;
}



