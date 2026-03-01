/********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 02-10-25
* Program      :finding cost price of a item
* sample Input : sp:500 ,p: 50 n:15
* Sample Output:   cp:30
* 
***************************************************/

#include<stdio.h>
int main()
 {
   int items;          //declating an integer as items
   float sp,p,cp1,diff;  //declaring four floating variables
   printf("Please enter the no.of items  selling price,profit");
  scanf("%d%f%f",&items,&sp,&p);   //taking input from the user
   diff=sp-p;                      //subtracting p in sp and storing in diff
   cp1=diff/items;                 //dividing diff by items and storing in cp1
   printf("cost_price=%f",cp1);    //printing cost price
   return 0;
  }


