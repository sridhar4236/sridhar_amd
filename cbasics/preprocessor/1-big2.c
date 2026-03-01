/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
1. Write down a macro to find out the biggest of two numbers.

MAX(x,y) should define code to find biggest of x and y. Implement array sorting function using this macro (Bubble sort)

* Sample Input  :12 15
* Sample Output :15 is Big
*
*************************************************/

#include <stdio.h>

// define macro to find maximum of two numbers
#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main()
{
    int a, b;

    // prompt user to enter two values
    printf("enter values: ");
    scanf("%d%d", &a, &b);

    // use macro to find the bigger number
    int c = MAX(a,b);

    // print the result
    printf("%d is big", c);

    return 0;
}






