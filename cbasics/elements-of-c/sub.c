/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :subtracting of two numbers
* sample Input : 10 6
* Sample Output:   4
* 
***************************************************/
//brief:subtracting of two numbers
#include<stdio.h>
int main()
{
   int a,b,c;  //declaration of three integers
   printf("enter the 2 integers\n");
    scanf("%d%d",&a,&b); //taking input from the user
   c=a-b;                //subtracting of two numbers and storing in c variable
   printf("%d - %d = %d",a,b,c); //printing of subtraction of two numbers
  return 0;
 }
