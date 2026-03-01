/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : area and perimeter of rectangle
* sample Input : 10 5
* Sample Output:   a: 50 , p: 20
* 
***************************************************/

#include<stdio.h>
int main()
{
  int l,b,p,a,m;   //declaring five integers
  printf("Enter the values of length and breadth");
  scanf("%d%d",&l,&b);   //taking input from the user
  m=l+b;                 //adding length and breadth and storing in m variable
  p=2*m;                 //multiplying m with 2 and storing in p variable
  a=l*b;                //multiplying length and breadth and storing in a variable
  printf("Perimeter=%d Area=%d",p,a); //printing perimeter and area 
  return 0;
  }


