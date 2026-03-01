
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 05-09-25
* Program       : 2.Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n
* Sample Input &  Output:
Enter a and n value:
3
4
Result:81

*
*************************************************/
/*
 *  @brief  : This function is used to find the power of two integers and returns integer
 *  @note   : power is calculated by repeated multiplication of the same number
 *  @Param1 : int a base value
 *  @Param2 : int n power value
 *  @retval : int - a power of b.
 */

\

#include <stdio.h>
int  power(int a,int n)//declaration of a,n variables to base and power
{
	int r=1,i;
	for (i=1;i<=n;i++)
	{
		r=r*a;
	}
	return r;
}
int main()
{
int pow,a,n;//variable declaration
printf("Enter a and n value:\n");//prompt to enter input
scanf("%d%d",&a,&n);//read inputs 
pow=power(a,n);//function call to find power
printf("Result:%d",pow);//result

    return 0;
}

