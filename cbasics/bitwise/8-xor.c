/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :8. WAP implements XOR functionality without using XOR(^) operator.
* Sample Input  :Enter Values in Hexadecimal: 12 13
* Sample Output :XOR of 12 and 13 is 1
*
*************************************************/

#include <stdio.h>

// main function to perform xor operation
int main()
{
    int x, y;

    // prompt user to enter two hexadecimal values
    printf("enter value in hexadecimal: ");
    scanf("%x%x", &x, &y);

    // perform xor using bitwise operator
    printf("xor of %x and %x is %x", x, y, (x ^ y));

    return 0;
}

