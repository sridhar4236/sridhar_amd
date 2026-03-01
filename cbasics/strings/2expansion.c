/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       :  Write a program to replace a given character by another character in a string.  WAP to display the word expansion of a number
	Example: Input String : "789"
	Output : Seven Eight Nine"

* Sample Input  : Enter number : 365
  Sample Output : Word expansion of a number : Three Six Five 
*
*************************************************/

#include<stdio.h>
void replaceCharacter(char str1[],char ch1,char ch2){  //this function replaces an given character with another character
	int i=0;
	while(str1[i]!='\0')
	{       //operation
		if(str1[i]==ch1)
		{
			str1[i]=ch2;
		}
		i++;
	}
}

void numtoWord(char str2[])
{                                      //This function replaces the number to word in a given string input
	int i=0;
	while(str2[i]!='\0')
	{
		if(str2[i]>='0' && str2[i]<='9')  // checking number 0 to 9
		{
			switch(str2[i])
			{
				case '0' : printf("Zero ");
						   break;
				case '1' : printf("One ");
						   break;
				case '2' : printf("Two ");
						   break;
				case '3' : printf("Three ");
						   break;
				case '4' : printf("Four ");
						   break;
				case '5' : printf("Five ");
						   break;
				case '6' : printf("Six ");
						   break;
				case '7' : printf("Seven ");
						   break;
				case '8' : printf("Eight ");
						   break;
				case '9' : printf("Nine ");
			}
		}
		i++;
	}
}

int main()
{
	
/*	char str1[100];                                   //declaring char array
	printf("Enter an string : " );
	scanf("%[^\n]",str1);                             //taking string input

	char ch1,ch2;                                    //declaring char variables
	printf("Enter character to replace : ");
	scanf(" %c",&ch1);                               //taking replace character input
	printf("Enter replacement character : ");
	scanf(" %c",&ch2);                               //taking replacement character input

	replaceCharacter(str1,ch1,ch2);
	printf("Modified string : %s\n",str1);            //printing the modified character*/
    
	char str2[100];
	printf("Enter number : ");
	scanf("%[^\n]",str2);
	printf("Word expansion of a number : ");
	numtoWord(str2);                                  //  covert digits to word expansion 
    printf("\n");
	return 0;
}





