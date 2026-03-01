/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 26-08-25
* Program      :Given alphabet case reverse
* Sample Input  : S   s
* Sample Output : s   S


* 
***************************************************/

#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
//	if(c>=97 && ?printf("%d is even",a):printf("%d is odd",a);
	(c<=90)?((c>=65)?printf("%c\t",c+32):printf("not alpha\t")):((c>=97)?((c<=122)?printf("%c",c-32):printf("not alpha")):printf("not alpha"));
	//	printf("%d is greater",big);
	return 0;
} 

