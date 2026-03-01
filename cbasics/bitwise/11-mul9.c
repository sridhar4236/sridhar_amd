/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :11. WAP multiply a number by 9 using bit shift.

* Sample Input  :Enter Value:12
* Sample Output :Result 12 x 9 =108
*
*************************************************/


#include <stdio.h>

int main()
{
    int x;

    // prompt user to enter a value
    printf("enter value: ");
    scanf("%d", &x);

    // multiply by 9 using (x << 3) + x, which is (x * 8) + x
    printf("result %d x 9 = %d", x, ((x << 3) + x));

    return 0;
}

