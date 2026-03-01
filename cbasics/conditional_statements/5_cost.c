/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : cost of calls
* sample Input : 125
* Sample Output:   281.2 rupees

* 
***************************************************/

#include<stdio.h>

int main()

{

	int calls;
	scanf("%d",&calls);
	if(calls<=100)
	
			printf("cost of %d calls 250 rupees ",calls);
			else
			
				printf("cost of %dcalls : %f rupees",calls,(250 + (calls-100)*1.25));
	
	return 0;
} 

