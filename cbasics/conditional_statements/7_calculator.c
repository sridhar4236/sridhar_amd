/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      :calculator
* sample Input :13/2
* Sample Output:   6
* 
***************************************************/

#include<stdio.h>

int main()
{
 
	int a,b;
	char c;
	scanf("%d %c%d",&a,&c,&b);
	if(c =='+')
	printf("%d + %d = %d", a,b,a+b);
	if(c=='-')
	printf("%d - %d = %d", a,b,a-b);
	if(c=='*')
	printf("%d * %d = %d", a,b,a*b);
	if(c=='/')
	printf("%d /  %d = %d", a,b,a/b);
	return 0;
} 

