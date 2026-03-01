/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :28-09-25
* Program       :1. Write a program to Set, clear and toggle a particular bit using bit wise operator?
* Sample Input  :Enter value in HexaDecimal :12
* Sample Output :12
Enter bit Position : 2
After SET : 16
After CLEAR : 12
After TOGGLE : 16

*
*************************************************/

#include <stdio.h>

// define macro to set bit 'p' in integer 'x'
#define SET(x,p) (x | (0x1 << p))

// define macro to clear bit 'p' in integer 'x'
#define CLEAR(x,p) (x & (~(0x1 << p)))

// define macro to toggle bit 'p' in integer 'x'
#define TOGGLE(x,p) (x ^ (0x1 << p))

int main()
{
    int p;
    int x;

    // prompt user to enter a hexadecimal value
    printf("Enter value in HexaDecimal ");
    scanf("%x", &x);

    // display the entered hexadecimal value
    printf("%x\n", x);

    // prompt user to enter the bit position
    printf("Enter bit Position : ");
    scanf("%d", &p);

    // display result after setting the bit
    printf("After SET : %x\n", SET(x, p));

    // display result after clearing the bit
    printf("After CLEAR : %x\n", CLEAR(x, p));

    // display result after toggling the bit
    printf("After TOGGLE : %x\n", TOGGLE(x, p));

    return 0;
}

