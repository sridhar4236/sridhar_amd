
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 05-09-25
* Program       :6.Write a function that takes an integer number as input and prints its multiplication table.return type is  void
* Sample Input  :19
* Sample Output :
19 * 1 =19
19 * 2 =38
19 * 3 =57
19 * 4 =76
19 * 5 =95
19 * 6 =114
19 * 7 =133
19 * 8 =152
19 * 9 =171
19 * 10 =190

*
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to print table upto 10 multiples 
 *  @note   : using loop function prints table upyo 10 multiples 
 *  @Param1 : int a  value
 *  @retval : int - a*b.
 */

void  table(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d =%d\n",a,i,a*i);//print the result
	}
}
int main()
{
int a;//variable declaration
printf("Enter a  value:\n");//prompt to enter input
scanf("%d",&a);//read inputs 
table(a);//function call to print table

    return 0;
}

