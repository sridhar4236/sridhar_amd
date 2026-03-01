/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :6.  define a macro to generate swapping function for int, float ,
double and character datatypes, as a generic function using macros.
* Sample Input  :Enter x and y values: 12 13
* Sample Output :X=13 & Y=12 
*
*************************************************/

#include <stdio.h>

// macro to swap two variables of a given data type
#define swap(dt, x, y) dt t; t = x; x = y; y = t;

int main()
{
    int x, y;

    // prompt user to enter values
    printf("enter x and y values: ");
    scanf("%d%d", &x, &y);

    // swap values using macro
    swap(int, x, y)

    // print swapped values
    printf("x = %d & y = %d", x, y);

    return 0;
}



