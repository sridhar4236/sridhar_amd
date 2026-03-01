/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : alphabet  or not
* sample Input : 2
* Sample Output:  not alphabet 
* 
***************************************************/

#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
//	printf("%d",c);
	if (c <= 90)
	{	if (c>=65)
			printf("alphabet");
		else 
			printf("not alphabet-");
	}	
	else{
		if(c>=97)
		{	
		if(c<=122)
		printf("alphabet");
	else
		printf("not alphabet%d",c);
		}
		else
			printf("not alphabet\n");
	}
	return 0;
} 

