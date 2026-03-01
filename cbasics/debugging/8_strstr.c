/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : write a program to implement strstr()
* Sample Input  :
* Sample Output :

enter string :placement
Enter substring :cement
sub string found at index 3

*************************************************/

#include<stdio.h>
#include<string.h>
int mystrstr(char [],char []);
int main()
{
	char str[100];
	char sub[100];
	printf("enter string :");
	scanf(" %[^\n]s",str);
	printf("Enter substring :");
	scanf(" %[^\n]s",sub);
	int ret=mystrstr(str,sub);
	if(ret>=0)
		printf("sub string found at index %d\n",ret);
	else
		printf("sub string not found\n");
 return 0;
}
int mystrstr(char str[],char sub[])
{
	int i,j,l1,l2;
    l1=strlen(str);
	l2=strlen(sub);
	for(i=0;i<=l1-l2;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(str[i+j]!=sub[j])
			 break;
		}
		if(j==l2)
		{
		  return i;
		}
	}
    
	return -1;
}





