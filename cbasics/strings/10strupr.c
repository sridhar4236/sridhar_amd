/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
*Program       : void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string

* Sample Input  :
* Sample Output :
*                Enter string in lower case :system
					SYSTEM		
*************************************************/

#include<stdio.h>
void mystrupr(char []);
int main()
{
   	char upr[100];
	printf("Enter string in lower case :");
	scanf(" %[^\n]s",upr);
	mystrupr(upr);
	printf("%s",upr);
    return 0;
}
 void mystrupr(char upr[])
{
	int i;
	for(i=0;upr[i];i++)
	{
		if(upr[i]>='a' && upr[i]<='z')
		
		 upr[i]=upr[i]-32;
	}
}




