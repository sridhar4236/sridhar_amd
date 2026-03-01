/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :2. WAP whether a number is ODD or EVEN using bitwise.
* Sample Input  :Enter value: 34
* Sample Output :EVEN NUMBER
*
*************************************************/
#include <stdio.h>
#define CHECK(x) (x & 0x1 )

int main()
{
int  x;
printf("Enter value: ");
scanf("%d",&x);
if (CHECK(x))
	printf("ODD NUMBER");
else 
	printf("EVEN NUMBER");
    return 0;
}


