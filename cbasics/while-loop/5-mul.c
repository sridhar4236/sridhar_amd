/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 01-09-25
* Program       :write a program to multiply two numbers without using * operator
* Sample Input  :4 4
* Sample Output :16
*
*************************************************/

#include<stdio.h>

int main()
{
	int m,n,sum=0;// input variable
	printf("enter the m and n values");
	scanf("%d%d",&m,&n);//read the values
	while (n>=1)
	{
	sum=sum+m;
	n--;
	}
	printf("%d",sum);

    return 0;
}



