/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : write a program to implement strchr()
* Sample Input  :
* Sample Output :
 Enter string : placement
Enter search character : m
search element m is found at index 5

Enter string : placement
Enter search character : e
search element e is found at index 4


*************************************************/

#include<stdio.h>
int mystrchr(char s[],char ch);
int main()
{
   	char s[100];
	char ch;
	printf("Enter string : ");
	scanf(" %[^\n]s",s);
	printf("Enter search character : ");
	scanf(" %c",&ch);
    int ret=mystrchr(s,ch);
	if(ret>=0)
		printf("search element %c is found at index %d\n",ch,ret);
	else
		printf("search element is not found");
	return 0;
}

int mystrchr(char s[],char ch)
{
	int i=0;
		for(i=0; i<s[i]!='\0';i++)
        {
			if(ch==s[i])
				return i;
		}
		return -1;
}




