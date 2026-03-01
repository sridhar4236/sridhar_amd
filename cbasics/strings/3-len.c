/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       :  "Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
  
  eg., char name[10] = ""abc""; //size of name is 10 bytes
                                // length of name is 3"

* Sample Input  :Enter an string : string
* Sample Output :Length of string : 6  
*
*************************************************/

#include<stdio.h>
int mystrlen(char str[])
{                                                 //this function calculates the length of the given string input
	int l=0;
	while(str[l]!='\0')
		l++;
	return l;
}


int main()
{
	char str[100];                              //declaring char array
	printf("Enter an string : ");
	scanf("%[^\n]",str);                        //taking string input
	int strlength = mystrlen(str);
	printf("Length of %s : %d\n",str,strlength); //printing the length of the string
    return 0;
}




