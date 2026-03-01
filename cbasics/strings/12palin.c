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
	int index=0;             
	char temp;
	while(str[index]!='\0')  
		index++;
    
	for(int i=0;i<index/2;i++)
	{                           //reverse of string operation
		temp=str[i];
		str[i]=str[index-1-i];
		str[index-1-i]=temp;
		
	}
	
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



