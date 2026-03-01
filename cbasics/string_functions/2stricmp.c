/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
*Program       : write a program implement stricmp()
* Sample Input  :
* Sample Output :
*                 Enter first string : STring
				  Enter second string : stRING
						both string are equal

				Enter first string : job
				Enter second string : DOne
			        	first String is bigger 
		

				  
*************************************************/

#include<stdio.h>
int mystrlwr1(char []);
int mystrlwr2(char []);
int mystricmp(char s1[],char s2[]);
int main()
{
   	char s1[100];
	char s2[100];
	printf("Enter first string : ");
	scanf(" %[^\n]",s1);
	printf("Enter second string : ");
	scanf( " %[^\n]",s2);
	mystrlwr1(s1);
	mystrlwr2(s2);
    int ret=mystricmp(s1,s2);
	if(ret>0)                                      // ret>0 string 1 is bigger
		printf("first String is bigger \n");
	else if(ret==0)                                // ret ==0 both are equal
		printf("both string are equal \n");
	else                                           // ret <0 string 2 is bigger
		printf("second string is bigger \n");
    return 0;
}

int mystrlwr1(char s1[])
{
	int i;
	for(i=0;s1[i];i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
			s1[i]=s1[i]+32;

	}
}
int mystrlwr2(char s2[])
{
	int i;
	for(i=0;s2[i];i++)
	{
		 if(s2[i]>='A' && s2[i]<='Z')
			s2[i]=s2[i]+32;

	}
}


int mystricmp(char s1[],char s2[])
{
	int i=0;
		for(i=0; s1[i]!='\0' || s2[i]!='\0' ;i++) // checking if null character is present in botth strings 
		{
			if(s1[i]!=s2[i])                        // string 1 not to string 2 then both strings are not same
			{
				return s1[i]-s2[i];                 // if strings are not same then,do difference between both strings
			}
		}
	return 0;                                       // return 0 if strings are same
}




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





