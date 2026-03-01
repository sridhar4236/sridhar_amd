/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :7. Write a program to find the biggest of three numbers using pointers that point to those numbers.
* Sample Input  : 10 20 30
* Sample Output :30 is big
*
*************************************************/

#include <stdio.h>

int main()
{
  int a,b,c;//declare three variables a,b,c
  printf("enter values:");//prompt to enter values
  scanf("%d%d%d",&a,&b,&c);//read values
  int *p1=&a;//declare pointer variable p1
  int *p2=&b;//declare pointer variable p2
  int *p3=&c;//declare pointer variable p3
  if (*p1>*p2 && *p1>*p3)//p1 is big
	  printf("first value is big");//print a is big
  else if(*p2>*p3)//p2 is big
	  printf("second value is big");//print b is big
  else
	  printf("third value is big");//print c is big


    return 0;
}



