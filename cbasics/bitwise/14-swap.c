/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :14. WAP Swap any two numbers using bitwise operators. How does it work?
* Sample Input  :Enter Values: 12 13
* Sample Output :After Swap x=13 y=12
*
*************************************************/

#include <stdio.h>


int main()
{
    int x, y;

    // prompt user to enter two integer values
    printf("enter values: ");
    scanf("%d%d", &x, &y);

    // swap values using xor without a temporary variable
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    // display the swapped values
    printf("after swap x=%d y=%d", x, y);

    return 0;
}

