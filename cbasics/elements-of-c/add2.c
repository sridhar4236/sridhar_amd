/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      : addition of two integers by user input
* sample Input : 2 3
* Sample Output:   5
* 
***************************************************/
//brief:addition of two integers by user input
#include<stdio.h>

int main()
{
   int a,b,c;  //declaring three integers
   printf("enter the 2 integers\n");
    scanf("%d%d",&a,&b);  //taking user input
   c=a+b;                 //adding a and b and storing in c variable
   printf("%d + %d = %d",a,b,c); //printing the addition of a and b
  return 0;
 }


