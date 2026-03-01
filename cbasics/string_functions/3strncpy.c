/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program       : write a program implement strncpy
  sample intput : Enter source string : kernel
                  Enter n characters to copy: 4
  sample output : destination string after copy :kern

*************************************************/

#include<stdio.h>
void mystrncpy(char d[],char s[],int n)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(n>0)
		{
          d[i]=s[i];
		  n--;
		}
	}
    d[i]='\0';
	printf("destination string after copy :");
	printf("%s\n",d);
}

int main()
{
  	char d[100];
	char s[100];
	printf("Enter source string : ");
	scanf(" %[^\n]s",s);
	int n;
	printf("Enter n characters to copy: ");
	scanf("%d",&n);
    mystrncpy(d,s,n);

     return 0;
}



