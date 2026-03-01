/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      : vowel  or not
* sample Input : 2
* Sample Output:  not vowel
* 
***************************************************/

#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
//	printf("%d",c);
	if (   c == 'a' ||  c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u' ||  c == 'A' ||  c == 'E' ||  c == 'O' ||c == 'I' || c == 'U'   )
			printf("vowel");
	else
	printf("not vowel");
	return 0;
}
