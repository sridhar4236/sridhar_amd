/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
*  Program       : write a program to implement strncat()
*Sample Input  :
Enter source string : fun
Enter destination string : pin
Enter n characters to concatenate: 2

Sample Output :destination string after concatenate :pinfu

*************************************************/
#include<stdio.h>
void mystrncat(char d[],char s[],int n)
{
	int i,l;
	for( l=0;d[l]!='\0';l++);
	for( i=0;s[i]!='\0';i++)
	{
		if(n>0)
		{
          d[l]=s[i];
		  l++;
		  n--;
		}
	}
	d[l]='\0';
   	printf("destination string after concatenate :");
	printf("%s\n",d);

}

int main()
{
   	char d[100];
	char s[100];
	printf("Enter source string : ");
	scanf(" %[^\n]",s);
	printf("Enter destination string : ");
	scanf( " %[^\n]",d);
	int n;
	printf("Enter n characters to concatenate: ");
	scanf("%d",&n);
    mystrncat(d,s,n);	
    return 0;
}



