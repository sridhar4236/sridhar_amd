/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : average of 4
* sample Input : 5 , 5, 5 , 5
* Sample Output:   5
* 
***************************************************/
#include<stdio.h>
int main()
{
  float m,r;      //declaring floating of two variables
  int a,b,c,d;    //declaring four integers
  printf("Enter the 4 numbers");
  scanf("%d%d%d%d",&a,&b,&c,&d);  //taking input from the user
  m=a+b+c+d;                       //adding all four numbers and storing in m variable
  r=m/4;                           //finding average of four numbers by 4 and storing in r variable
  printf("result=%f",r);           //printing the result
  return 0;
 }


