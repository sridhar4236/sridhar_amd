/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 05-09-25
* Program       :1.Write a function to calculate simple interest. Call it in main function with appropriate
inputs and print the total amount the user will get after the tenure (principle + interest)

* Sample Input &  Output :
*
Enter Principle ,Time in months,rate of interest:
12000
12
2.3
Total Amount:15312.000000



*************************************************/
/*
 *  @brief  : This function is used to find the simple interest  and returns float.
 *  @note   : simple interest is calculated by formula si=p*t*r/100
 *  @Param1 : int p principle amount
 *  @Param2 : int m months
 *  @Param3 : float rate of interest
 *  @retval : float simple intererst
 */

#include <stdio.h>
float  simpleinterest(int p,int m,float r)
{
	float si;
	si=(p*m*r/100.0);
	return si;
}
int main()
{
int p,m;//declaration of p,m variables to read principle and months
float r,si; //declaration of r,si variables 
printf("Enter Principle ,Time in months,rate of interest:\n");//prompt to enter prinpciple ,time ,months
scanf("%d%d%f",&p,&m,&r);//read inputs p,m,r
si=simpleinterest(p,m,r);//function call to find out simple interest
printf("Total Amount:%f",si+p);//result total amount simple interest + principle

    return 0;
}

