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

	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	
			printf("%d is greater",a);
			else 	if(b>c && b>c) 
			
				printf("%d is greater ",b);
			else 	if(c>d )
				printf("%d is greater ",c);
			else	
				printf("%d is greater ",d);
	return 0;
} 

