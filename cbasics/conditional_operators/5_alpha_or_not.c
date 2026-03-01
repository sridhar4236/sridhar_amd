/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 26-08-25
* Program       :Given character alphabet or not
* Sample Input  : A
* Sample Output : alphabet

* 
***************************************************/

#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
//	if(c>=97 && ?printf("%d is even",a):printf("%d is odd",a);
	(c<=90)?((c>=65)?printf("%cis\talpha",c):printf("not alpha\t")):((c>=97)?((c<=122)?printf("%cis\t alpha",c):printf("not alpha")):printf("not alpha"));
	//	printf("%d is greater",big);
	return 0;
} 

