
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 05-09-25
* Program       : 3.Write a function that takes two numbers a and b as input arguments and returns their product as return value , without using * operator.
* Sample Input &  Output :
Enter a and b value:
12 34
Result:408 


*
*************************************************/
/*
 *  @brief  : This function is used to find the Multiplaction of two integers and returns integer
 *  @note   : Multiplication is performing by repeated addition of the same number
 *  @Param1 : int a
 *  @Param2 : int b
 *  @retval : int - product of a & b
 */


#include <stdio.h>
int  multi(int a,int b)
{
	int r=0,i;
	for (i=1;i<=b;i++)
	{
		r=r+a;
	}
	return r;
}
int main()
{
int mult,a,b;//variable declaration
printf("Enter a and b value:\n");//prompt to enter input
scanf("%d%d",&a,&b);//read inputs 
mult=multi(a,b);//function call to find multiplication of two numbers
printf("Result:%d",mult);//result

    return 0;
}

