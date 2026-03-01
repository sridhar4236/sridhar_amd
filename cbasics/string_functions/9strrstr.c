/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
*  Program       : write a program to implement strrchr()
* Sample Input  :
* Sample Output :

Enter string : placement
Enter search character : e
search element e is found at index 6

*************************************************/

#include<stdio.h>
int mystrrchr(char s[],char ch);
int main()
{
    
	char s[100];
	char ch;
	printf("Enter string : ");
	scanf(" %[^\n]s",s);
	printf("Enter search character : ");
	scanf(" %c",&ch);
    int ret=mystrrchr(s,ch);
	if(ret>=0)
		printf("search element %c is found at index %d\n",ch,ret);
	else
		printf("search element is not found\n");
	return 0;
}

int mystrrchr(char s[],char ch)
{
	int i,j=-1;
	for(i=0;s[i];i++)
	{
		if(ch==s[i])
			j=i;
	}
	return j;
}


