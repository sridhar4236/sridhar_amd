/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : 12. check 20th bit status
* sample Input :
* Sample Output:   
* 
***************************************************/
#include <stdio.h>

int main()
{
    int x;

    // prompt user to enter a value
    printf("enter value: ");
    scanf("%d", &x);
if(x&(0x1<<20))
      printf("off");
else
    printf("off");

    return 0;
}
