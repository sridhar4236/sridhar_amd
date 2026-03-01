/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : Implement below functions on your own
                   int strlen( char str[]);
                   returns the length of the string.
* Sample Input  : Enter string : system
* Sample Output :string length : 6
*
*************************************************/

#include<stdio.h>

int mystrlen(char[]);                     // function declaration
int main()
{
    int ret;
	char c[100];                           // declare string                   // here if we initialize char a[]="kernel"; array length = 7

	printf("Enter characters :");        // entering characters
	scanf("%s",c);                       // read characters user entered

	ret=mystrlen(c);

	printf("string length : %d\n",ret);   // prints string size 
    return 0;
}

int mystrlen(char c[])                      // fucntion definition
{
	int i=0;
    while(c[i])                       //for(i=0;c[i];i++);
	{
	 i++;
	}
		return i;
}


