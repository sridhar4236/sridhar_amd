nt /********************************************
* Name         : B SRIDHAR SAGAR
* KMID         : KM62AEAI04
* Date         : 18-09-25
* Program      :4. Declare 3 integer variables. Declare an integer pointer. 
Assign the address of each variable to the pointer in succession and
print the value of the variable using indirection operator on the pointer.
* Sample Input  :Enter Values: 12 13 14
* Sample Output :
first value :12  second value :13  third value :14 
*
*************************************************/

#include <stdio.h>

int main()
{
int a,b,c;//declare variables
printf("Enter Values: ");//enter values
scanf("%d%d%d",&a,&b,&c);//read input
int *p1=&a;//declare integer pointer and store  address of a in p1
printf("first value :%d  ",*p1);//print a value
p1=&b;//store address of b in p1
printf("second value :%d  ",*p1);//print b value
p1=&c;//store address of c in p1
printf("third value :%d  ",*p1);//print c value







    return 0;
}



