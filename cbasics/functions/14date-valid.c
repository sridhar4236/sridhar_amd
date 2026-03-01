
/************************************************
* Name          : B sridhar sagar
* KMID          : KM62AEAI04
* Date          : 08-09-25
* Program       :14. Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid.
* Sample Input  : 31-02-2024
* Sample Output :Invalid
*
*************************************************/

#include <stdio.h>
int valid(int d,int m,int y);//function  declaration
int leap(int y);//function declaration

int main()
{
int m,d,y,v;//declaration of variables
printf("Enter date:");//message to enter date
scanf("%d-%d-%d",&d,&m,&y);//read date from user
v=valid(d,m,y);//function call to find date is valid or not
if(v==1)
	printf("Valid");//if v value is 1 then print valid
else
	printf("Invalid");//otherwise print not valid


    return 0;
}

/*
 *  @brief  : This function is used to check the given is leap year or not.
 *  @Param1 : int y year
 *  @retval : int - 1-leap & 0-not leap
 */


int leap(int y)
{
	if(y%4==0&&y%100!=0 || y%400==0)
       {
       return 1;//leap
       }
	else
      {
      return 0;//not leap
      }
}

/*
 *  @brief  : This function is used to check the date is given is valid  or not.
 *  @Param1 : int  d date
 *  @Param1 : int m month
 *  @Param1 : int y year 
 *  @retval : int - 1-valid & 0-not valid
 */



int valid(int d,int m,int y)
{
int flag,l;
flag=0;
l=leap(y);
if ((y%100!=0&&y%4==0)||y%400==0)
   { 
	   l=1;
   }
if(m==4 || m==6 || m==9 || m==11)
{
	if( d==31)
	{ 
		flag=1;
	}
}
if(m==2)
{
if(d==31 || d==30 ||(d==29 && leap==0))
   {
	   flag=1; 
   }
}
if (d<1 || d>31 || m<1 || m>12 || y<1000 || y>9999)
{
	flag=1;
}
if (flag==1)
 {
    return 0;//not valid
 }
else
  {
    return 1;//valid
  }
}




