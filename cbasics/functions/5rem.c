
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 05-09-25
* Program       : 5.Write a function that takes two numbers a and b, and returns the remainder after dividing a with b.
* Sample Input  : 43 4
* Sample Output :3
*
*************************************************/
/*
 *  @brief  : This function is used to find remainder of two integers and returns integer
 *  @note   : remainder is calculated by modulus operation
 *  @Param1 : int a  value
 *  @Param2 : int b value
 *  @retval : int - a%b.
 */


#include <stdio.h>
int  modulus(int a,int b)
{
	int r;
	r=a%b;
	return r;
}
int main()
{
int r,a,b;//variable declaration
printf("Enter a and b value:\n");//prompt to enter input
scanf("%d%d",&a,&b);//read inputs 
if(b!=0)
{
	r=modulus(a,b)//function call to find remainder
    printf("Quotient:%d",r);//result
}
else
   printf("Deniminator is zero operation can't performed");//error message when b==0

    return 0;
}


