/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 01-09-25
* Program       : write a program to read a number n and print sum of all numbers from 1 to n
* Sample Input  :1 to 10
* Sample Output :55
*
*************************************************/

#include<stdio.h>

int main()
{
	int i=1,n,sum=0;//input variables
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=sum+i;// add of two numbers
	i++;
	}
	printf("%d",sum);

    return 0;
}



