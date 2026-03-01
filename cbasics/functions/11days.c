
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       :11. Write a function to accept a month and year as input, and return the number of days in that month as output. 
print the number of days in main.
* Sample Input  :12-2024
* Sample Output :no of days 31
*
*************************************************/

#include <stdio.h>

int noofdays(int m,int y);//function declaration 
int leap(int y);//function declaration 

int main()
{
int m,y,d;// declaration of m,y,r variables
printf("Enter month and year\n");//prompt to enter year month
scanf("%d-%d",&m,&y);//read input y,m
d = noofdays(m,y);//function call to find no of days 
if(d!=0)
	printf("no of days %d",d);
else
	printf("Input Error");

    return 0;
}

/*
 *  @brief  : This function is used to find no of days returns no of days
 *  @Param1 : int m month
 *  @Param2 : int y year
 *  @retval : int no of days
 */
int noofdays(int m,int y)
{

if(m==2)
{
	if(m==2 && leap(y)==1)
		return 29;
	else
		return 28;
}

	if(m==4||m==6||m==9||m==11)
		return 30;
	else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		return 31;

    return 0;
    
    
    
}
/*
 *  @brief  : This function is used to find given year is leap or not  returns 1 or 0
 *  @Param1 : int y year
 *  @retval : int 1-leap  & 0-not a leap year
 */

int leap(int y)
{
	if(y%4==0&&y%100!=0 || y%400==0)
       return 1;// if 1 year is  leap
	else
       return 0;//if 0 year is not leap
}

