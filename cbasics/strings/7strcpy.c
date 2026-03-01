/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : void strcpy ( char d[] , char s[]);
       copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

 Sample Input  : Enter size of source  string : 5
				       Enter size of destination string ,size should be greater than source string : 7
				       Enter soucre string : kernel
			           Enter destination string : nasters 

Sample Output : Destination string after copy : kernel

*************************************************/

#include<stdio.h>
void mystrcpy(char [],char []);
int main()
{
   
	char d[100];
	char s[100];
	
	printf("Enter source string : ");
	scanf(" %[^\n]s",s);
	printf("Enter destination string : ");
	scanf(" %[^\n]s",d);
	printf("Destination string after copy : ");
	mystrcpy(d,s);
    printf("%s\n",d);
    return 0;
}
 
void mystrcpy(char d[],char s[])
{
  int i;
  for(i=0;s[i];i++)
  {
	  d[i]=s[i];                     // copying source string to destination string
  }
  d[i]='\0';                          // at last destination string give null character
 
} 



