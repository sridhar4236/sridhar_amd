/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 01-09-25
* Program       :write a program to read a number n and print the factorial of n
* Sample Input  :5
* Sample Output :120
*
*************************************************/

#include<stdio.h>

int main()
{
	int n,sum=1,i=1;//input variable
	printf("enter the value for n");
	scanf("%d",&n);//read the values
	while(i<=n)
	{
	sum=sum*n;
	n--;
}
   printf("%d",sum);

    return 0;
}



