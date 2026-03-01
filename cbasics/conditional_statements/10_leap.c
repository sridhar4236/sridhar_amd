/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : leap year or not
* sample Input : 2004
* Sample Output:   leap year
* 
***************************************************/

#include<stdio.h>

int main()

{

	int a;
	scanf("%d",&a);
	if(a%100==0)
	{
		if(a%400==0)
			printf("%d is leap is year",a);
			else
			printf("%d is not leap year ",a);
		
	}
	else if(a%4==0)
				printf("%d is leap year ",a);
				else
				printf("%d is not leap year ",a);
	
	return 0;
} 

