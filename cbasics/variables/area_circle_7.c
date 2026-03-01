/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :finding perimeter and area of circle
* sample Input : 7
* Sample Output:  a:154 p: 44 
* 
***************************************************/

#include<stdio.h>
int main()
{
  float pi=3.14;    //initializing pi value as float 
 int s,r;             //declaring two integers
 float p,a;           //declaring two floating variables
  printf("Please enter the radius\n");
 scanf("%d",&r);       //taking input from the user 
   p=2*pi*r;           //multiplying pi and r values with 2 and storing in s variable
  s=r*r;               //multiplying r with r and storing s variable
  a=pi*s;              //multiplying pi with s and storing in a variable
   printf("Perimeter=%f Area=%f",p,a);   //printing perimeter and area
  return 0;
  }


