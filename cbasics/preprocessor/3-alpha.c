/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :3.  WAP to print if  a character is alphanumeric or special character, using macro conditions
* Sample Input  :g
* Sample Output :Alphanumeric
*
*************************************************/

#include <stdio.h>

// macro to check if character is alphanumeric
#define alpha(a) (lower(a) || upper(a) || numeric(a))

// macro to check if character is lowercase letter
#define lower(a) ((a) >= 'a' && (a) <= 'z')

// macro to check if character is uppercase letter
#define upper(a) ((a) >= 'A' && (a) <= 'Z')

// macro to check if character is numeric digit
#define numeric(a) ((a) >= '0' && (a) <= '9')

int main()
{
    char ch;

    // prompt user to enter a character
    printf("enter character: ");
    scanf(" %c", &ch); // added space before %c to skip any leftover newline

    // check if character is alphanumeric
    if(alpha(ch))
        printf("alphanumeric");
    else
        printf("special character");

    return 0;
}



