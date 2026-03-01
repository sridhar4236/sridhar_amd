
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       :8.Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function. 
(return 1 if it is alphanumeric, 0 if it is not alpha numeric).
* Sample Input  : s
* Sample Output : the given character is alphanumeric
*
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to find given character is alphanumeric or not returns 1 or 0
 *  @Param1 : char character
 *  @retval : int 1-alphanumeric & 0-not a alphanumeric
 */

int alphanumeric(char ch)
{



	if ( (ch<=90 && ch>=65)|| (ch<=122 && ch>=97)|| (ch<=57 && ch>=48))
	{
		return 1;//reurns 0 if charcter is alphanumeric
	}
	else
	{
      return 0;//reurns 0 if charcter is not alphanumeric
	}
	
}

int main()
{
char ch;// declaration of ch variable
 printf("Enter Character:\n");//prompt to enter character
 scanf("%c",&ch);//read input ch
	if ( alphanumeric(ch)==1)//function call to find  given character is alphanumeric or not.
		printf("The given Character  Alphanumeric\n");//charcter is alphanumeric
	    
	else 
		printf("The given Character is not a alphanumeric \n");//charcter is not alphanumeric

    return 0;
}



