/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : "Write a program to convert a string into upper case and print.
                  eg., input : Hello
                  output : HELLO"

* Sample Input  : Enter size of  string : upper

* Sample Output : 	UPPER
*
*************************************************/

#include<stdio.h>
void mystrupr(char []);
int main()
{
    
	char upr[100];
	printf("Enter string  :");                    // enter user lower case string
	scanf(" %[^\n]s",upr);
	mystrupr(upr);
	printf("%s",upr);                             // prints upper case string
    return 0;
}
 void mystrupr(char upr[])
{
	int i;
	for(i=0;upr[i];i++)
	{
		if(upr[i]>='a' && upr[i]<='z')             
		
		 upr[i]=upr[i]-32;                         // operation converting lower to upper
	}
}



