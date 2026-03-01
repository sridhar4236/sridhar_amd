/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
*Program       : write a program to implement strreplace()

* Sample Input  : str[]=kernelmaster Mastererers
                  sub[]=er
                  rep[]=xx
*
Sample Output   : kxxnelmastxx Mastxxxxxxs				  
*
*************************************************/

#include<stdio.h>
#include<string.h>
void mystrreplace(char str[],char sub[],char rep[])
{
  int l1,l2,k,r;
  l1=strlen(str);
  l2=strlen(sub);
  int i,j,index;
  for(i=0;i<=l1-l2;i++)
  {
	  for(j=0;j<l2;j++)
	  {
		  if(str[i+j]!=sub[j])
		  break;
	  }
	  if(j==l2)
	  {
		  r=j;
		  index=i;
		  k=0;
	      while(k<l2)
		  {
			  str[index]=rep[k];
			  index++;
			  k++;
		  }
	  }
  }
      if(r==l2)
	  		printf("String after replace : %s\n",str);
	  else 
		  printf("sub string not found in main string\n");
}

int main()
{
    char str[100];
	char sub[100];
	char rep[100];
	printf("Enter main string : ");
	scanf(" %[^\n]",str);
	printf("Enter sub string: ");
	scanf(" %[^\n]",sub);
	printf("Enter replacement character : ");
    scanf(" %[^\n]",rep);
	mystrreplace(str,sub,rep);
    return 0;
}



