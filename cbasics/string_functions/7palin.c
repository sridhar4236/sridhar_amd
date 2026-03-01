/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       :palindrome or not
* output : srirs palindrome
 ssdfdfsdsg not plaindrome

*************************************************/

#include<stdio.h>
void mypalin(char []);
int main()
{
   
	char d[100];
	printf("Enter source string : ");
	scanf("%s",d);
	mypalin(d);
    return 0;
}
 
void mypalin(char d[])
{
  int i=0,j=0,c=0;
  while(d[i]!='\0')
		  i++;
  while((i/2)>0)
  {
	  if(d[j]!=d[i-1])
	  {  c=c+1;
	  break;}
	  else
	  {
		  i--;
		  j++;
	  }
  }
		  if(c==0)
		  printf("palindeome");
	  else

		  printf("not palindeome");
return ;
} 



