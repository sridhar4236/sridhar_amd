
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       : 10. Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.
* Sample Input  :2024
* Sample Output :leap year 
*
*************************************************/

#include <stdio.h>
/*
 *  @brief  : This function is used to find given year is leap or not  returns 1 or 0
 *  @Param1 : int y year
 *  @retval : int 1-leap  & 0-not a leap year
 */

int leap(int y)
{
if( (y%4==0 && y%100!=0)||y%400==0)
{
	return 1;//reurns 1 if year is leap

}
else
{
return 0;//reurns 0 if year is not leap
}


}
int main()
{
int y,r;// declaration of y,r variables
printf("enter year:\n");//prompt to enter year
scanf("%d",&y);//read input y
r=leap(y);//function call to find  given year is leap year or not 
if(r==1)
	printf("Leap Year");// given is leap year
else 
	printf("Not a Leap Year");// given is not leap year


    return 0;
}


