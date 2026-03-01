/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 26-08-25
* Program      :Biggest of 2 numbers
* Sample Input  : a=5,b=6
* Sample Output : b=6

* 
***************************************************/

#include<stdio.h>

int main()
{

	int a,b;
	scanf("%d%d",&a,&b);
	a>b?printf("%d is greater",a):printf("%d is greater",b);
//	(a>b)?((a>c)?printf("%d\t",a):printf("%d\t",c)):(b>c)?printf("%d\t",b):printf("%d\t",c);
	//	printf("%d is greater",big);
	return 0;
} 

