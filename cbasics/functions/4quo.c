
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 05-09-25
* Program       :4.Write a function that takes two numbers a and b, and returns the quotient after dividing a with b.

* Sample Input  :12 6
* Sample Output :2
*
*************************************************/
/*
 *  @brief  : This function is used to find the power of two integers and returns integer
 *  @note   : power is calculated by repeated multiplication of the same number
 *  @Param1 : int a dividend value
 *  @Param2 : int b divisor value
 *  @retval : int - quotient 
 */

#include <stdio.h>
int  divide(int a,int b)
{
	int r;
	r=a/b;
	return r;
}
int main()
{
int r,a,b;//variable declaration
printf("Enter a and b value:\n");//prompt to enter input
scanf("%d%d",&a,&b);//read inputs 
if(b!=0)
{
	r=divide(a,b);//function call to find quotient
    printf("Quotient:%d",r);//result
}
else
   printf("Deniminator is zero operation can't performed");//error message if b==0

    return 0;
}


