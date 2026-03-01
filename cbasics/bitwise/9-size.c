/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :9. WAP to implement the sizeof operation using the bitwise operator.  
* Sample Output :size of variable:4
*
*************************************************/

#include <stdio.h>

// main function to determine size of int using bit shifting
int main()
{
    int i = 1;
    int c = 0;

    // loop until all bits are shifted out of the integer
    while(i)
    {
        c++;
        i = i << 1;
    }

    // print size of int in bytes
    printf("size of variable: %d", c / 8);

    return 0;
}

