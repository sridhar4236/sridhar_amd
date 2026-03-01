/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : removing sign(only magnitude)
* sample Input : -500
* Sample Output:   500
* 
***************************************************/

#include<stdio.h>

int main()

{

	int a;
	scanf("%d",&a);
	if(a<=0)
	
			printf("%d ",a*-1);
			else
			
				printf("%d ",a);
	
	return 0;
} 

