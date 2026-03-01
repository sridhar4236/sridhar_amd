/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : 7. WAP implements addition functionality without using ADD('+') Operator.   
* Sample Input  :12 13
* Sample Output :sum =15
*
*************************************************/

#include <stdio.h>

// function to add two numbers without using '+' operator
int add(int a, int b) {
    while (b != 0) {
        // carry contains common set bits of a and b
        int carry = a & b;

        // sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;

        // carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Sum = %d\n", add(num1, num2));

    return 0;
}



