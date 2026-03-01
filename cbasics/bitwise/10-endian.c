/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :10. WAP to convert Little endian integer to Big endian integer 
* Sample Input  :0xaabbccdd
* Sample Output :Big Endian Integer : ddccbbaa
*
*************************************************/

#include <stdio.h>

int main()
{
    unsigned int x = 0xaabbccdd;

    // rearrange bytes to convert to big endian format
    int y = (x << 24) | (x >> 24) | ((x << 8) & 0x00ff0000) | ((x >> 8) & 0x0000ff00);

    // print the result in hexadecimal
    printf("big endian integer : %x", y);

    return 0;
}

