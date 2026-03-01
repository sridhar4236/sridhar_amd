/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       :  int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index.
* Sample Input  :
* Sample Output :
*                   enter string : warning
					enter search charcater : w
					matching element is w and index of the character is 0 
*************************************************/
#include<stdio.h>
int findchar(char [],char);
int main()
{
	
    char str[50];
    printf("enter string");
    scanf(" %[^\n]s",str);
    char ch;
    printf("enter search charcater ");
    scanf(" %c", &ch);
    int ret= findchar(str,ch);
	if(ret!=-1)
          printf ("matching element is %c and index of the character is %d \n", ch, ret);
    else
          printf("element %c is not found", ch);
    return 0;
}

int findchar(char str[],char ch)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(ch==str[i])          // sreaching character in a given string
			return i;
	}
	return -1;
}





















