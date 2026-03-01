/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : given number is postive negative or zero
* sample Input : -9
* Sample Output:  negative
* 
***************************************************/

#include<stdio.h>

int main()

{

	int a;
	scanf("%d",&a);
	if(a==0)
	
			printf("%d  zero",a);
			else if(a>0)
				printf("%d is postive ",a);
			else
				
				printf("%d is negative",a);

	return 0;
} 

