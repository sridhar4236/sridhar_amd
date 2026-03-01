/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : using while ,do while and for loops :

* * * * *
* * * *
* * *
* *

* sample Input :
* Sample Output:   
* 
***************************************************/

#include <stdio.h>

int main()
{
    int i,j,n;  //declaring three integers
	printf("Enter the range\n");
	scanf("%d",&n);  //taking input from the user

	for(i=1;i<=n;i++)   //checking for condition
	{
		for(j=n;j>=i;j--)  //checking for condition
		{
			printf("* ");
		}
		printf("\n");
	}


    return 0;
}

