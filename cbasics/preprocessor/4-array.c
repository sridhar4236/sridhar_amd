/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :4.  Define  a macro that receives an array and the number of elements in the array as arguments.
Write a program using this macro to print out the elements of the array. Try using this macro for different data types of arrays.
* Sample Input  :Enter Size of array: 2
Enter Elements: 12 13
* Sample Output :
12
13
*
*************************************************/

#include <stdio.h>

// macro to print array elements using format specifier
#define print(fs, arr, n) for(i = 0; i < n; i++) printf(fs, arr[i]);

int main()
{
    int n;

    // prompt user to enter size of array
    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    // prompt user to enter integer elements
    printf("enter integer elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print integer array
    print("%d\n", arr, n)

    float arr2[n];

    // prompt user to enter float elements
    printf("enter float elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr2[i]);
    }

    // print float array
    print("%f\n", arr2, n)

    return 0;
}



