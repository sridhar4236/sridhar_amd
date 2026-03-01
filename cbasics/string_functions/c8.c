i/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 17-09-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/

#include<stdio.h>
int str_str(char s[],char su[]);
int main()
{

	int d;
	char s[100],su[100];
	scanf(%s %s,s,su);
	d=str_str(s,su);
	if(d==-1)
		printf("not found\n");
	else
		printf("index\%dn",d);


	return 0;
} 


int str_str(char s[],char su[])
{
	int i=0,a,b;
	while(su[i]!='\0')
	i++;
	a=i;
	b=i;
	while(s[i]!='\0')
	{
		int j=0;
	while(su[i]!='\0')
	{
		if(su[j]=s[j])
		{	i++;
		j++;
		a--;
		}
		else
		{
			i++;
			j++;
		}
	}
		if(a==0)
			return i-b;
	}
 return -1;
}
