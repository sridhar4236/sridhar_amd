/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : digit or not
* sample Input : y
* Sample Output: not  digit 
* 
***************************************************/

#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
//	printf("%d",c);
	if (c <= 57)
	{	if (c>=48)
			printf("digit");
		else 
			printf("not digit");
	}	
	else 
			printf("not digit");


	return 0;
} 

