
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       :9. Write a calculator program with 5 functions below to do the operations of addition, subtraction,
multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%
* Sample Input  : 12 * 3
* Sample Output :12 * 3 =36
*
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to find  addition  given numbers
 *  @Param1 : int a number
 *  @Param2 : int b number
 *  @retval : int a+b
 */
int add(int a,int b)
{
    return a+b;//result
}
/*
 *  @brief  : This function is used to find  subtraction  given numbers
 *  @Param1 : int a number
 *  @Param2 : int b number
 *  @retval : int a-b
 */
int sub(int a,int b)
{
    return a-b;//result
}
/*
 *  @brief  : This function is used to find  multiplication  given numbers
 *  @Param1 : int a number
 *  @Param2 : int b number
 *  @retval : int a*b
 */
int mul(int a,int b)
{
    return a*b;//result
}
/*
 *  @brief  : This function is used to find  remainder of  given numbers
 *  @Param1 : int a number
 *  @Param2 : int b number
 *  @retval : int a%b
 */
int mod(int a,int b)
{
    return a%b;//result
}

 /*
 *  @brief  : This function is used to find  division  given numbers
 *  @Param1 : int a number
 *  @Param2 : int b number
 *  @retval : int a/b
 */
int div(int a,int b)
{
    return a/b;//result
}


int main()
{
int a,b;// declaration of a&b variables
char c;// declaration of c variable
printf("enter input values:\n");//prompt to enter integes
scanf("%d%d",&a,&b);//read input a,b
printf("enter operand\n");//prompt to enter opreand
scanf(" %c",&c);//read input c
switch(c)
{
	case '+':printf("%d + %d =%d",a,b,add(a,b));//function call to find  addition of  given numbers
    break;
    case '-':printf("%d - %d =%d",a,b,sub(a,b));//function call to find  subtraction of  given numbers
    break;
    case '*':printf("%d * %d =%d",a,b,mul(a,b));//function call to find  multiplication of  given numbers
	break;
    case '/':if (b>0)
				 printf("%d / %d =%d",a,b,div(a,b));//function call to find  multiplication of  given numbers
             else
				 printf("Operation Can't performed Denom=0");//denominator is zero
	break;
	case '%':
          	if (b>0)
				printf("%d %% %d =%d",a,b,mod(a,b));//function call to find  remainder of  given numbers
			else 
				printf("Operation Can't performed Denom=0");//denominator is zero
	break;
	default:printf("Invalid Operand");//invalid operand enter by user
}
    return 0;
}
