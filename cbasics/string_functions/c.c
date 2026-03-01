/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 17-09-25
* Program      :
* sample Input :
* Sample Output:   
* 
***************************************************/
/*
#include<stdio.h>
int m(char s[], char n);
int main()
{

	char s[100],n;
	printf("enter\n");
	scanf("%s",s);
	printf("search\n");
	scanf(" %c",&n);
	int d=m(s,n);
if(d==-1)
	printf("not found");
else printf("%d\n",d);


	return 0;
} 
int m(char s[], char n)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==n)
			return i;
				i++;
	}
	return -1;
}
*/#include<stdio.h>
int m(char s[]);
int main()
{

	char s[100],n;
	printf("enter\n");
	scanf("%s",s);
	printf("search\n");
	scanf(" %c",&n);
	int d=m(s);
if(d==1)
	printf("palin");
else printf("not");


	return 0;
} 
int m(char s[])
{
	int i=0,j=0;
	while(s[i]!='\0')
		i++;
	printf("%d\n",i);
	printf("%d\n",i/2);

	/*
	{
		if(s[i]==n)
			return i;
				i++;
	}
	return -1;
}
*/

		while((i/2)>0)
{	printf("%d\n",i);
	printf("%d\n",j);

	if(s[j]==s[i-1])
		//return -1;
	 {i--;
	j++;}
 else return -1;	

}
	printf("%d\n",i);
	printf("%d\n",j);
return 1;
}


