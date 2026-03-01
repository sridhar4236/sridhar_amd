/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :5. WAP whether a number is a power of 2 or not?
* Sample Input  :Enter Value : 5
* Sample Output :Not Power of 2
*
*************************************************/


#include <stdio.h>

// function to check if a number is a power of 2
void power(int x)
{
    int i, count = 0;

    // loop through each bit position in a 32-bit integer
    for(i = 31; i >= 0; i--)
    {
        // check if the ith bit is set
        if(x & (0x1 << i))
            count++;
    }

    // if exactly one bit is set, it's a power of 2
    if(count == 1)
        printf("power of 2");
    else
        printf("not power of 2");
}

int main()
{
    int x;

    // prompt user to enter a decimal value
    printf("enter value: ");
    scanf("%d", &x);

    // call function to check power of 2
    power(x);

    return 0;
}


