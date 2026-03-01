/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 01-09-25
* Program       :write a program to print the values of below series 1-1/2+1/3-1/4....1/n
* Sample Input  :5
* Sample Output :1-1/2+1/3-1/4+1/5
*
*************************************************/

#include<stdio.h>

int main()
{
	int n,i=2;// input variables
	printf("enter the n value");
	scanf("%d",&n);//read the values
	printf("1");
	while(n-1)
	{
	if(i%2==0)
	{
			printf("-1/%d",i);
	}
	else
	{
		printf("+1/%d",i);
	}
	i++;
	n--;
	}

    return 0;
}



