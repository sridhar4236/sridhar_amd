/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 26-08-25
* Program      :Biggest of 3 numbers
* Sample Input  : a=5,b=9,c=8
* Sample Output : b=9
*

* 
***************************************************/

#include<stdio.h>

int main()
{

	int a,b,c,big=0;
	scanf("%d%d%d",&a,&b,&c);
	//	a>b?printf("%d is greater",a):printf("%d is greater",b);
	(a>b)?((a>c)?printf("%d\t",a):printf("%d\t",c)):(b>c)?printf("%d\t",b):printf("%d\t",c);
	//	printf("%d is greater",big);
	return 0;
} 

