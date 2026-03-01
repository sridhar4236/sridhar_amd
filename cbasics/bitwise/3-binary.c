/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :
3. Write a printbinary(int , int ) function consists of 2 integer variables. First one is the value of the variable and the second one is the size of the variable. 

    Example: 
    char x=5; 
    printbinary(x,sizeof(x)); 
    output:  00000101


* Sample Input  :enter value in hexadecimal: 7
* Sample Output :00000111
*
*************************************************/
#include <stdio.h>

// function to print binary representation of a character
void printbinary(unsigned char x, int y)
{
    int i;

    // loop through each bit from most significant to least significant
    for(i = (y * 8) - 1; i >= 0; i--)
    {
        // check if the ith bit is set
        if(x & (0x1 << i))
            printf("1");
        else
            printf("0");
    }
}

int main()
{
    unsigned char x;

    // prompt user to enter a hexadecimal value
    printf("enter value in hexadecimal: ");
    scanf("%hhx", &x);

    // call function to print binary representation of the character
    printbinary(x, sizeof(x));

    return 0;
}

