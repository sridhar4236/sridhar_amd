/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 01-09-25
* Program       :write a program to read n number from the keyboard and find          their sum
* Sample Input  :5+3+2+4+1
* Sample Output :15
*
*************************************************/

#include<stdio.h>

int main()
{
	int i=1,n,a,sum=0;// input variables
	printf("enter a number for n");
	scanf("%d",&n);   // read the values
	while (i<=n)
	{
	printf("enter a value for a");
	scanf("%d",&a);  //read the values
	sum=sum+a;      //add of two numbers
	i++;
	}
	printf("%d",sum);

    return 0;
}


