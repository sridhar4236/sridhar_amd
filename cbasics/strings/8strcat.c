/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : void strcat( char d[] , char s[]);
concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )

* Sample Input  :
* Sample Output :
*                   Enter soucre string : masters
					Enter destination string : kernel
					Destination string after copy : kernelmasters

*************************************************/

#include<stdio.h>
void mystrcat(char [],char []);
int main()
{
   	char d[100];
	char s[100];
	
	printf("Enter soucre string : ");
	scanf(" %[^\n]s",s);
	printf("Enter destination string : ");
	scanf(" %[^\n]s",d);
	printf("Destination string after copy : ");
	mystrcat(d,s);
    printf("%s\n",d);
    return 0;
}
 
void mystrcat(char d[],char s[])
{
  int s1=0;
  int d1=0;
  while(s[s1]!='\0')
  {
	  s1++;
  }
  while(d[d1]!='\0')
  {
	  d1++;
  }

  for(int i=0;i<s1;i++)
	  {
		  d[d1+i]=s[i];
		  
	  }
  
	   d[s1+d1]='\0';
     
}







