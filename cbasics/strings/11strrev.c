/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : void strrev( char str[]);

						//reverse the string (without using any extra array)
							eg., input : str[] = "Kernel";
							output : str[] = "lenreK"

* Sample Input  :
* Sample Output :
*                Enter an string : reverse
                 Reversed string : esrever

*************************************************/

#include<stdio.h>
void mystrrev(char str[])
{                        //reverse function

	int i=0,j=0;char s[100];
 while(str[i]!='\0')
 {	 s[i]=str[i];
	 i++;}
 while(i>0)
 {
	 str[j]=s[i-1];
	 i--;
	 j++;

}
str[j]='\0';
}


int main()
{
		
	char str[100];                //declaring char array
	printf("Enter an string : ");
	scanf(" %[^\n]s",str);            //taking string input from user
	mystrrev(str);
	printf("Reversed string : %s\n",str); //reversed string
    return 0;
}



