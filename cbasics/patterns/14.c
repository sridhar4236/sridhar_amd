/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :14. Write a program to print all prime numbers between 2 given integers.
* Sample Input  :input: 10 20
* Sample Output :prime numbers between 10 & 20 are: 11 13 17 19
*
*************************************************/
#include <stdio.h>

int main()
{
    int i, n, j, a, fact;

    // prompt user to enter the starting value
    printf("enter first value:\n");
    scanf("%d", &a);

    // prompt user to enter the ending value
    printf("enter last value:\n");
    scanf("%d", &n);

    // display header for prime numbers
    printf("prime numbers between %d & %d are:", a, n);

    // loop through each number in the range
    for (i = a; i <= n; i++)
    {
        fact = 0;

        // mark non-prime numbers
        if ( i <= 1)
            fact = 1;

        // check for divisibility
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                fact = 1;
        }

        // print the number if it is prime
        if (fact == 0)
        {
            printf("%d ", i);
        }
    }

    
    return 0;
}






