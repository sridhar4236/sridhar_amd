/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :5. Define a generic function, for different types of array printing , by taking array and array size as arguments.~
* Sample Input  :Enter Size of array: 4
 Enter Elements:
12.3
13.4
12.7
11 
* Sample Output :
12.300000
13.400000
12.700000
11.000000

*
*************************************************/
#include <stdio.h>

// macro to print array elements using format specifier
#define print(fs, arr, n) for(i = 0; i < n; i++) printf(fs, arr[i]);

int main()
{
    int n, i;

    // prompt user to enter size of array
    printf("enter size of array: ");
    scanf("%d", &n);

    float arr2[n];

    // prompt user to enter float elements
    printf("enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr2[i]);
    }

    // print float array
    print("%f\n", arr2, n);

    return 0;
}



