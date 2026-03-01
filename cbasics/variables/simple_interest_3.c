/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : simple interest
* sample Input : 
* Sample Output:   
* 
***************************************************/

#include<stdio.h>

int main()
{
  int p,n;    //declaring two integers
  float r,si,m;  //declaring three floating variables 
printf("Please enter the principle,time rateofinterest\n");
 scanf("%d%d%f",&p,&n,&r);   //taking input from the user

 m=n/12.0;     //dividing n value with 12.0 and storing in m
 si=(p*m*r)/100;  //multiplying p m and r and dividing with 100 and storing in si
 printf("Simple_interest=%f",si);  //printing simple interest
 return 0;
}


