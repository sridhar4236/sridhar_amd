/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :modulus of two numbers
* sample Input : 10 3
* Sample Output:  1 
* 
***************************************************/
//brief:modulus of two numbers
#include<stdio.h>

int main()
{
   int a,b,c;  //declaring three integers
   printf("enter the 2 integers\n");
    scanf("%d%d",&a,&b);  //taking input from the user 
   c=a%b;                 //modulus of a and b and storing in c variable
   printf("%d % %d = %d",a,b,c); //printing modulus of a and b
  return 0;
 }

