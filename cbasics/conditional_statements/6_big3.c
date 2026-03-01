/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      :greatest of 3 numbers
* sample Input :4 2 9
* Sample Output:   9
* 
***************************************************/

#include<stdio.h>

int main()

{

	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is greater",a);
			else
			printf("%d is greater ",c);
		
	}
	else if(b>c)
				printf("%d is greater ",b);
				else
				printf("%d is greater ",c);
	
	return 0;
} 

