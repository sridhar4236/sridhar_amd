/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :3. Write a program to take input for two character variables using pointers and find out which
character has higher ascii value.
* Sample Input  :a A
* Sample Output :a is big
*
*************************************************/

#include <stdio.h>

int main()
{

	char b,c;//declare character variable
	char *p1=&b;//store address of b in p1
	char *p2=&c;//store address of c in p2
	printf("Enter first character: ");//prompt to enter character
	scanf("%c",p1);//read input
	getchar();
	printf("Enter second character: ");
	scanf("%c",p2);//read input
	if(*p1>*p2)
		printf("1st character has higher value");//1st is big
	else if(*p1<*p2)
		printf("2nd character has higher value");//2nd is big
	else
		printf("Both are same");//both are same



    return 0;
}



