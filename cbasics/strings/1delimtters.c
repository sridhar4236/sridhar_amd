/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : 1). Take a string as an input, and count the number of words in the string. Take space, comma, exclamation, question mark and fullstop as delimitters for word counting.

   Sample Input  : Enter an string : Hello! how are you? I am fine.
* Sample Output : The number of words in the given string : 7

*
*************************************************/

#include<stdio.h>
int wordsCount(char str[]){ //this function counts the number of words in a string 
    int i=0,count=0;
	 while (str[i] == ' ' || str[i] == '?' || str[i] == '!' || str[i] == ',' || str[i] == '.') {  //ignoring all leading delimiters
        i++;
    }
	while(str[i]!='\0'){ //operation

            if((str[i]!=' ' && str[i]!='?' && str[i] != ',' && str[i]!='.' && str[i]!='!')&&(str[i+1]==' '||str[i+1]=='?'||str[i+1] ==','||str[i+1]=='.'||str[i+1]=='!'||str[i+1]=='\0'))
                            {
                            count++;
                            }
                            i++;
                        
}
  return count;  
  }
int main()
{
	char str[100];//char array declaration
	printf("Enter an string : ");
	scanf("%[^\n]",str);//taking string input from user

	int words=wordsCount(str);
    printf("Words count = %d\n",words);//printing the word count
	return 0;
}



