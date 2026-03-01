/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      :greatest of 2 numbers
* sample Input :4 2 
* Sample Output:   4
* 
***************************************************/

#include<stdio.h>

int main()

{

	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c )
	
			printf("%d is greater",a);
			else 	if(b>c )
				printf("%d is greater ",b);
			else	
				printf("%d is greater ",c);
	return 0;
} 

