/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       :7. Write a function that can take an integer as input and return 1 if the number is prime number,  
return 0 if it is not prime and print appropriate output message in main according to output.
return type is integer. function name IsPrime - returns int (0 or 1)
* Sample Input  : 24
* Sample Output : prime number
*
*************************************************/


#include <stdio.h>
/*
 *  @brief  : This function is used to find given number is prime number returns 1 or 0
 *  @Param1 : int n number
 *  @retval : int 1-prime number & 0-not a prime number
 */
int  isprime(int n)
{
int i,fact=0;

	if (n==2 || n<=1)
	   {
		   return 0;//reurns 1 if integer is not prime number
	   }
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			fact=1;
	}
	if(fact==0)
	{
		return 1;//reurns 1 if integer is prime number
     }
	else
	{

    return 0;//reurns 1 if integer is not prime number
    }

}

int main()
{
int n;// declaration of n variable
printf("Enter value:\n");//prompt to enter integer
scanf("%d",&n);//read input n
if(isprime(n)==1)//function call to find  given number is prime number or not 
	printf("Prime Number");//integer is prime number
else
	printf("Not a Prime Number");//integer is not a prime  number.
    return 0;
}


