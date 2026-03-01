/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :6. WAP implements subtraction functionality without using SUB('-') Operator.    
* Sample Input  :23 10
* Sample Output :difference=10
*
*************************************************/

#include <stdio.h>

// Function to add two numbers without using '+' operator
int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;   // Find carry
        a = a ^ b;           // Sum without carry
        b = carry << 1;      // Shift carry left
    }
    return a;
}

// Function to subtract two numbers without using '-' operator
int subtract(int a, int b) {
    // a - b = a + (~b + 1)
    return add(a, add(~b, 1));
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Difference = %d\n", subtract(num1, num2));

    return 0;
}
