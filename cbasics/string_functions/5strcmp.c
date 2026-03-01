/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : write a program to implement strncmp()
* Sample Input  :
* Sample Output :
* Enter first string : tech
  Enter second string : balchelor
  Enter n characters to compare :3
  first String is bigger 

*************************************************/

#include<stdio.h>
int mystrncmp(char s1[],char s2[],int n);
int main()
{
   	char s1[100];
	char s2[100];
	printf("Enter first string : ");
	scanf(" %[^\n]s",s1);
	printf("Enter second string : ");
	scanf( " %[^\n]s",s2);
    int n;
    printf("Enter n characters to compare :");
	scanf("%d",&n);
    int ret=mystrncmp(s1,s2,n);
	if(ret>0)                                      // ret>0 string 1 is bigger
		printf("first String is bigger \n");
	else if(ret==0)                                // ret ==0 both are equal
		printf("both string are equal \n");
	else                                           // ret <0 string 2 is bigger
		printf("second string is bigger \n");
    return 0;
}

int mystrncmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0; i<s1[i]!='\0' || s2[i]!='\0' ;i++) // checking if null character is present in botth strings 
	{
		if(n>0)
		{
			if(s1[i]!=s2[i])                        // string 1 not to string 2 then both strings are not same
			{
				return s1[i]-s2[i];                 // if strings are not same then,do difference between both strings
			}
			n--;
		}
	}
		return 0;                                       // return 0 if strings are same
    

}



