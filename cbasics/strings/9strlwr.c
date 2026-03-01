/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
*  Program       :  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

* Sample Input  :
* Sample Output : 
               Enter string  : EMBEDDED
                  embedded
*
*************************************************/

#include<stdio.h>
void mystrlwr(char []);
int main()
{
   	char lwr[100];
	printf("Enter string  :");
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
		
		 lwr[i]=lwr[i]+32;
	}
}



