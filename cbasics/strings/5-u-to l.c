/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       :  "Write a program to convert a string into lower case and print.
* Sample Input  :  HELLO
* Sample Output :  hello
*
*************************************************/

#include<stdio.h>
void mystrlwr(char []);
int main()
{
	char lwr[100];
	printf("Enter string :");          // enter string upper
	scanf(" %[^\n]s",lwr);
	mystrlwr(lwr);
	printf("%s",lwr);
    return 0;
}
 void mystrlwr(char lwr[])
{
	int i;
	for(i=0;lwr[i];i++)
	{
		if(lwr[i]>='A' && lwr[i]<='Z')
		
		 lwr[i]=lwr[i]+32;            // converts to lower
	}
}


