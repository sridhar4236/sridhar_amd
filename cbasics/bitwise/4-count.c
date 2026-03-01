/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :4. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
* Sample Input  :Enter Value In Hexadecimal :5
* Sample Output :Count=2
*                101
*
*************************************************/

#include <stdio.h>

// function to count number of set bits in an integer
int count(int x, int y)
{
    int i, count = 0;

    // loop through each bit from most significant to least significant
    for(i = (y * 8) - 1; i >= 0; i--)
    {
        // check if the ith bit is set
        if(x & (0x1 << i))
            count++;
    }

    // return total number of set bits
    return count;
}

int main()
{
    int x, c;

    // prompt user to enter a hexadecimal value
    printf("Enter Value In Hexadecimal :");
    scanf("%x", &x);

    // call function to count set bits
    c = count(x, sizeof(x));

    // display the result
    printf("Count=%d\n", c);
	printf("%b",x);

    return 0;
}

