/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 25-08-25
* Program      :  Given character is vowel or not
* Sample Input  : A
* Sample Output : Vowel
*

* 
***************************************************/

#include<stdio.h>

int main()
{

	char c;
	int v =0;
	scanf("%c",&c);
//	printf("%d",c);
	v=  (c == 'a')? 1: c == 'e'?1:   c == 'i'?1: c == 'o'?1: c == 'u'?1:  c == 'A'?1:  c == 'E' ?1:  c == 'O'?1:c == 'I' ?1: c == 'U' ?1:0;
		if(v==1)
			printf("vowel");
	else
	printf("not vowel");
	return 0;
}
