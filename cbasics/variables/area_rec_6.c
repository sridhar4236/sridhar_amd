/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :finding perimeter and area of square
* sample Input : 5
* Sample Output:   a: 25 p:20
* 
***************************************************/

#include<stdio.h>
int main()
{
  int s,p,a;  //declaring three integers
  printf("please enter the side of a square");
  scanf("%d",&s);   //taking input from the user
   p=4*s;           //multiplying s with 4 and storing in p
  a=s*s;            //multiplying s with s and storing in a  
  printf("Perimeter=%d Area=%d",p,a);  //printing perimeter and area
  return 0;
  }
 

